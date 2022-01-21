#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "BloodOrbOverlapRevealToKiller.generated.h"

class UTimerObject;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEONI_API UBloodOrbOverlapRevealToKiller : public UStatusEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UTimerObject* _revealTimer;
    
public:
    UBloodOrbOverlapRevealToKiller();
    UFUNCTION(BlueprintPure)
    UTimerObject* GetRevealTimer() const;
    
};

