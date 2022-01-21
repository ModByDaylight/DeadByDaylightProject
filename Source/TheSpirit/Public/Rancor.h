#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "Rancor.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class URancor : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _survivorRevealDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float _killerRevealToObsessionDuration[3];
    
public:
    URancor();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SpawnBubbleAtSurvivorsLocation();
    
public:
    UFUNCTION(BlueprintPure)
    float GetSurvivorRevealDuration() const;
    
};

