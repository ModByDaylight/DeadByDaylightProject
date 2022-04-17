#pragma once
#include "CoreMinimal.h"
#include "Interactable.h"
#include "GameEventData.h"
#include "NoiseIndicatorEmitterInterface.h"
#include "EHatchState.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "Hatch.generated.h"

class USceneComponent;
class UPrimitiveComponent;
class UAnimationMontageSlave;

UCLASS()
class DEADBYDAYLIGHT_API AHatch : public AInteractable, public INoiseIndicatorEmitterInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_HatchState, meta=(AllowPrivateAccess=true))
    EHatchState _hatchState;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool _isSurvivorEscaping;
    
    UPROPERTY(Transient)
    bool _isEndGameOver;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool _isForceOpen;
    
    UPROPERTY(Transient)
    bool _attemptToCloseHatchOnNextEscape;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* _baseCollision;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _hatchOpenDuration;
    
public:
    AHatch();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetIsSurvivorEscaping(bool escaping);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetForceIsOpen(bool forceIsOpen);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetTimer(float duration);
    
private:
    UFUNCTION()
    void OnSurvivorsLeftChanged(int32 survivorRemaining);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnSurvivorEscaping();
    
    UFUNCTION(BlueprintCallable)
    void OnSurvivorEscapeInterrupted();
    
    UFUNCTION(BlueprintCallable)
    void OnSurvivorEscaped();
    
private:
    UFUNCTION()
    void OnRep_HatchState(EHatchState oldState);
    
    UFUNCTION()
    void OnHatchVisibilityChanged(bool isVisible);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHatchStateModified(EHatchState oldState, EHatchState newState);
    
private:
    UFUNCTION()
    void OnEndGameOver(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
public:
    UFUNCTION(BlueprintCallable)
    void Local_SetHatchState(bool open);
    
    UFUNCTION(BlueprintPure)
    bool IsSurvivorEscaping() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOpen() const;
    
    UFUNCTION(BlueprintPure)
    EHatchState GetHatchState() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    USceneComponent* GetHatchCenter() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    USceneComponent* GetEscapeFocalPoint() const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    UAnimationMontageSlave* GetAnimationMontageSlave() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FXOpenHatch();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FXEndSmoke();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FXCloseHatch();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_SetIsForceOpen(bool isForcedOpen);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_SetHatchState(EHatchState newState);
    
private:
    UFUNCTION()
    void Authority_OnCloseTimerComplete();
    
    UFUNCTION()
    void Authority_CheckedOpenHatch();
    
    UFUNCTION()
    void Authority_CheckedOpenForceClosedHatch();
    
    UFUNCTION()
    void Authority_CheckedCloseHatch();
    
    UFUNCTION()
    void Authority_CheckedChangeActiveState();
    
    
    // Fix for true pure virtual functions not being implemented
};

