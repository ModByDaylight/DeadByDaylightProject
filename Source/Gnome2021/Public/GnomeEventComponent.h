#pragma once
#include "CoreMinimal.h"
#include "RespawningEventComponent.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "GnomeEventComponent.generated.h"

class UInteractionRespawnableTrigger;
class UTimedRespawnableTrigger;

UCLASS()
class UGnomeEventComponent : public URespawningEventComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UInteractionRespawnableTrigger* _interactionRespawnableTrigger;
    
    UPROPERTY(Export, Transient)
    UTimedRespawnableTrigger* _timedRespawnableTrigger;
    
    UFUNCTION()
    void Authority_OnEndGameStarted(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
public:
    UGnomeEventComponent();
};

