#pragma once
#include "CoreMinimal.h"
#include "FrenzyEndNoCooldownDelegateDelegate.h"
#include "Components/ActorComponent.h"
#include "FrenzyStartDelegateDelegate.h"
#include "FrenzyEndDelegateDelegate.h"
#include "StartInjuredBleedoutDuringFrenzyDelegateDelegate.h"
#include "FrenzyReadyToStartDelegateDelegate.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "EFrenzyEndReason.h"
#include "FrenzyComponent.generated.h"

class ASlasherPlayer;
class UInteractionDefinition;
class UGameplayTagContainerComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UFrenzyComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFrenzyStartDelegate OnFrenzyStarted;
    
    UPROPERTY(BlueprintAssignable)
    FFrenzyEndDelegate OnFrenzyEnded;
    
    UPROPERTY(BlueprintAssignable)
    FFrenzyEndNoCooldownDelegate OnFrenzyEndedNoCooldown;
    
    UPROPERTY(BlueprintAssignable)
    FStartInjuredBleedoutDuringFrenzyDelegate OnInjuredBleedoutStartedDuringFrenzy;
    
    UPROPERTY(BlueprintAssignable)
    FFrenzyReadyToStartDelegate OnFrenzyReadyToStart;
    
private:
    UPROPERTY(Transient)
    ASlasherPlayer* _slasher;
    
    UPROPERTY(Export, Transient)
    UInteractionDefinition* _cooldownInteraction;
    
public:
    UFrenzyComponent();
    UFUNCTION(BlueprintCallable)
    void StartFrenzy();
    
    UFUNCTION(BlueprintCallable)
    void SetStartingFrenzy(bool startingFrenzy);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectState(UGameplayTagContainerComponent* objectState);
    
    UFUNCTION(BlueprintCallable)
    void ResumeFrenzyChargeDepletion();
    
    UFUNCTION(BlueprintCallable)
    void PauseFrenzyChargeDepletion();
    
private:
    UFUNCTION()
    void OnMoriStarted();
    
    UFUNCTION()
    void OnGameEventDispatched(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnFrenzyCooldownStarted();
    
    UFUNCTION(BlueprintPure)
    bool IsInFrenzyCooldown() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInFrenzy() const;
    
private:
    UFUNCTION()
    void InitializeFrenzy();
    
public:
    UFUNCTION(BlueprintPure)
    bool HasStartedInjuredBleedoutDuringThisFrenzy() const;
    
    UFUNCTION(BlueprintCallable)
    void EndFrenzy(EFrenzyEndReason reason);
    
    UFUNCTION(BlueprintPure)
    bool CanStartFrenzy() const;
    
    UFUNCTION(BlueprintPure)
    bool CanManuallyEndFrenzy() const;
    
};

