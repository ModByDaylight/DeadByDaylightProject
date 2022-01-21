#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "LunarEventComponent.generated.h"

class ALanternInteractable;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API ULunarEventComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(ReplicatedUsing=OnRep_lanternCollectedCount)
    int32 _lanternCollectedCount;
    
    UPROPERTY(Replicated)
    int32 _additionalEventProgressCount;
    
public:
    ULunarEventComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_lanternCollectedCount();
    
    UFUNCTION()
    void OnLanternHoldTimerEnd();
    
    UFUNCTION()
    void OnFinishedPlaying(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_ResetLanternLight(ALanternInteractable* lanternInteractable);
    
    UFUNCTION()
    void Local_OnCamperLostLantern(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    UFUNCTION()
    void Local_OnCamperEscape(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    UFUNCTION()
    void Authority_OnSlasherDestroysLantern(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    UFUNCTION()
    void Authority_OnPlayerLeaveGame(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    UFUNCTION()
    void Authority_OnPickupLantern(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    UFUNCTION()
    void Authority_OnFixGenerator(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    UFUNCTION()
    void Authority_OnDestroyCamperLightGameEvent(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    UFUNCTION()
    void Authority_OnCamperLostLantern(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    UFUNCTION()
    void Authority_OnCamperEscape(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
};

