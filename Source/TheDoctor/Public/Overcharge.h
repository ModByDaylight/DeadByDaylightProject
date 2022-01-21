#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "Overcharge.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UOvercharge : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _skillCheckFailurePenalty[3];
    
public:
    UOvercharge();
};

