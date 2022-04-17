#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RespawningEventComponent.h"
#include "GameEventData.h"
#include "GnomeEventComponent.generated.h"

class UInteractionRespawnableTrigger;
class UTimedRespawnableTrigger;

UCLASS(meta=(BlueprintSpawnableComponent))
class UGnomeEventComponent : public URespawningEventComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UInteractionRespawnableTrigger* _interactionRespawnableTrigger;
    
    UPROPERTY(Export, Transient)
    UTimedRespawnableTrigger* _timedRespawnableTrigger;
    
public:
    UGnomeEventComponent();
private:
    UFUNCTION()
    void Authority_OnEndGameStarted(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
};

