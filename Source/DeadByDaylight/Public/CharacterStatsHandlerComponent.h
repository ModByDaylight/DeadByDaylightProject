#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameEventData.h"
#include "EDBDScoreTypes.h"
#include "GameplayTagContainer.h"
#include "CharacterStatsHandlerComponent.generated.h"

class AActor;

UCLASS()
class DEADBYDAYLIGHT_API UCharacterStatsHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFUNCTION()
    void ReceiveGameEvent(EDBDScoreTypes scoreType, float amount, AActor* instigator, AActor* target);
    
    UFUNCTION()
    void OnGameEvent(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
private:
    UFUNCTION()
    void InitializePreMatchStats();
    
public:
    UCharacterStatsHandlerComponent();
};

