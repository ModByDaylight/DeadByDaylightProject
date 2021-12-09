#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AtlantaRitualSet.h"
#include "GameEventData.h"
#include "EDBDScoreTypes.h"
#include "GameplayTagContainer.h"
#include "DedicatedServerHandlerComponent.generated.h"

class AActor;

UCLASS()
class DEADBYDAYLIGHT_API UDedicatedServerHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FAtlantaRitualSet _atlantaRituals;
    
public:
    UFUNCTION()
    void ReceiveGameEvent(EDBDScoreTypes scoreType, float amount, AActor* instigator, AActor* target);
    
    UFUNCTION()
    void OnGameEvent(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    UDedicatedServerHandlerComponent();
};

