#pragma once
#include "CoreMinimal.h"
#include "ExhaustedEffect.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "ActivatableExhaustedEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UActivatableExhaustedEffect : public UExhaustedEffect {
    GENERATED_BODY()
public:
    UActivatableExhaustedEffect();
    UFUNCTION(BlueprintCallable)
    void Authority_Start(const float duration);
    
private:
    UFUNCTION()
    void Authority_OnHookCamper(const FGameplayTag gameEvent, const FGameEventData& gameEventData);
    
};

