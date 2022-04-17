#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EDBDScoreTypes.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "RitualHandlerComponent.generated.h"

class AActor;
class URitualEvaluatorBase;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API URitualHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<FName, URitualEvaluatorBase*> _evaluators;
    
public:
    URitualHandlerComponent();
    UFUNCTION()
    void ReceiveGameEvent(EDBDScoreTypes scoreType, float amount, AActor* instigator, AActor* target);
    
    UFUNCTION()
    void OnGameEvent(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
};

