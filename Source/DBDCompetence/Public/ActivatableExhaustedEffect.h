#pragma once
#include "CoreMinimal.h"
#include "ExhaustedEffect.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "ActivatableExhaustedEffect.generated.h"

UCLASS()
class DBDCOMPETENCE_API UActivatableExhaustedEffect : public UExhaustedEffect {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void Authority_Start(const float duration);
    
private:
    UFUNCTION()
    void Authority_OnHookCamper(const FGameplayTag gameEvent, const FGameEventData& gameEventData);
    
public:
    UActivatableExhaustedEffect();
};

