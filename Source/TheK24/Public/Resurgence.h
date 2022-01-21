#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "Resurgence.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UResurgence : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _healRegainPercentage[3];
    
public:
    UResurgence();
};

