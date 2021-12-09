#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "Rancor.generated.h"

UCLASS()
class URancor : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _survivorRevealDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float _killerRevealToObsessionDuration[3];
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SpawnBubbleAtSurvivorsLocation();
    
public:
    UFUNCTION(BlueprintPure)
    float GetSurvivorRevealDuration() const;
    
    URancor();
};

