#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "BloodOrbOverlapRevealToKiller.generated.h"

class UTimerObject;

UCLASS()
class THEONI_API UBloodOrbOverlapRevealToKiller : public UStatusEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UTimerObject* _revealTimer;
    
public:
    UFUNCTION(BlueprintPure)
    UTimerObject* GetRevealTimer() const;
    
    UBloodOrbOverlapRevealToKiller();
};

