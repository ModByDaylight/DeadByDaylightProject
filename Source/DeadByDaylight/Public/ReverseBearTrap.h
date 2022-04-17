#pragma once
#include "CoreMinimal.h"
#include "Interactable.h"
#include "ReverseBearTrap.generated.h"

class UAnimationMontageSlave;
class USkeletalMeshComponent;
class ACamperPlayer;

UCLASS()
class DEADBYDAYLIGHT_API AReverseBearTrap : public AInteractable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    USkeletalMeshComponent* _rbtMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAnimationMontageSlave* _animMontageSlave;
    
private:
    UPROPERTY(Replicated)
    int32 _keyID;
    
    UPROPERTY(Replicated)
    bool _exitGatesPoweredAfterAttachment;
    
    UPROPERTY(Replicated)
    bool _generatorFixedAfterAttachment;
    
public:
    AReverseBearTrap();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopMontage();
    
    UFUNCTION(BlueprintCallable)
    void StopExecutionTimer();
    
protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool ShouldUpdateExecutionTimer() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVisible(bool visible);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetGateClosedAtAttachment(bool closed);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetExecutionTimer(float time);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnWarningLevelChanged(int32 previousWarningLevel, int32 currentWarningLevel);
    
private:
    UFUNCTION()
    void OnGeneratorComplete(int32 remainingGeneratorCount);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnExitWarningZone();
    
    UFUNCTION(BlueprintCallable)
    void OnEnterWarningZone();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDetachSurvivor(ACamperPlayer* survivor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAttachSurvivorBegin(ACamperPlayer* survivor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAttachSurvivor(ACamperPlayer* survivor);
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyOnAttachSurvivorBegin(ACamperPlayer* survivor);
    
    UFUNCTION(BlueprintCallable)
    void NotifyDetachStarted(ACamperPlayer* survivor);
    
    UFUNCTION(BlueprintPure)
    bool IsRBTActivated() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInWarningZone() const;
    
    UFUNCTION(BlueprintPure)
    bool IsExecutionTimerDone() const;
    
    UFUNCTION(BlueprintPure)
    bool IsExecutionTimerActive() const;
    
    UFUNCTION(BlueprintPure)
    bool HasDetachStarted() const;
    
protected:
    UFUNCTION(BlueprintPure)
    bool GetWasGateClosedAtAttachment() const;
    
public:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    int32 GetWarningLevel() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetKeyID() const;
    
    UFUNCTION(BlueprintPure)
    bool GetGeneratorFixedAfterAttachment() const;
    
    UFUNCTION(BlueprintPure)
    bool GetExitGatesPoweredAfterAttachment() const;
    
    UFUNCTION(BlueprintPure)
    float GetExecutionTimerTimeLeft() const;
    
    UFUNCTION(BlueprintPure)
    float GetExecutionTimerPercentTimeElapsed() const;
    
    UFUNCTION(BlueprintPure)
    ACamperPlayer* GetAttachedSurvivor() const;
    
    UFUNCTION(BlueprintCallable)
    void FastForwardExecutionTimer(float deltaTime);
    
    UFUNCTION(BlueprintCallable)
    void DetachSurvivor(ACamperPlayer* survivor);
    
    UFUNCTION(BlueprintPure)
    bool CanExecute() const;
    
    UFUNCTION(BlueprintCallable)
    void Authority_SetKeyID(int32 keyID);
    
    UFUNCTION(BlueprintCallable)
    void AttachSurvivor(ACamperPlayer* survivor);
    
};

