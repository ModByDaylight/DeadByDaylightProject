#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "SlasherHitsWhileCarryingTrackerComponent.generated.h"

class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class USlasherHitsWhileCarryingTrackerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TSet<ACamperPlayer*> _campersHitDuringLastCarry;
    
public:
    USlasherHitsWhileCarryingTrackerComponent();
private:
    UFUNCTION()
    void OnPostAttack(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    UFUNCTION()
    void OnPickup(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    UFUNCTION()
    void OnAttack(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
};

