#pragma once
#include "CoreMinimal.h"
#include "BlessedStatusEffect.h"
#include "LingeringBlessedStatusEffect.generated.h"

UCLASS()
class ULingeringBlessedStatusEffect : public UBlessedStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float _lingerDuration;
    
    UFUNCTION(BlueprintCallable)
    void SetLingerDuration(const float lingerDuration);
    
private:
    UFUNCTION()
    void Authority_OnInRangeChanged(const bool inRange);
    
public:
    ULingeringBlessedStatusEffect();
};

