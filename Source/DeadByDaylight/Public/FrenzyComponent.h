#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameEventData.h"
#include "GameplayTagContainer.h"
#include "EFrenzyEndReason.h"
#include "FrenzyComponent.generated.h"

class ASlasherPlayer;
class UGameplayTagContainerComponent;
class UInteractionDefinition;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFrenzyComponentOnFrenzyStarted);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFrenzyComponentOnFrenzyEnded, float, cooldownTime);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFrenzyComponentOnFrenzyEndedNoCooldown);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFrenzyComponentOnInjuredBleedoutStartedDuringFrenzy);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFrenzyComponentOnFrenzyReadyToStart);

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UFrenzyComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFrenzyComponentOnFrenzyStarted OnFrenzyStarted;
    
    UPROPERTY(BlueprintAssignable)
    FFrenzyComponentOnFrenzyEnded OnFrenzyEnded;
    
    UPROPERTY(BlueprintAssignable)
    FFrenzyComponentOnFrenzyEndedNoCooldown OnFrenzyEndedNoCooldown;
    
    UPROPERTY(BlueprintAssignable)
    FFrenzyComponentOnInjuredBleedoutStartedDuringFrenzy OnInjuredBleedoutStartedDuringFrenzy;
    
    UPROPERTY(BlueprintAssignable)
    FFrenzyComponentOnFrenzyReadyToStart OnFrenzyReadyToStart;
    
private:
    UPROPERTY(Transient)
    ASlasherPlayer* _slasher;
    
    UPROPERTY(Export, Transient)
    UInteractionDefinition* _cooldownInteraction;
    
public:
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
    
    UFrenzyComponent();
};

