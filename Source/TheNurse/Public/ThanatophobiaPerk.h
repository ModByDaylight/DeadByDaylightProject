#pragma once
#include "CoreMinimal.h"
#include "BaseNursePerk.h"
#include "ThanatophobiaPerk.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THENURSE_API UThanatophobiaPerk : public UBaseNursePerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _actionSpeedModifier[3];
    
public:
    UThanatophobiaPerk();
};

