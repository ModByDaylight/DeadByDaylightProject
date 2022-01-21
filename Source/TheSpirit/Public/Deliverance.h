#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "Deliverance.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UDeliverance : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _brokenEffectDurationPerLevel[3];
    
public:
    UDeliverance();
};

