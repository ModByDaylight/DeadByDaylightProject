#pragma once
#include "CoreMinimal.h"
#include "HexPerk.h"
#include "HexBloodFavor.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UHexBloodFavor : public UHexPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float _palletInRange[3];
    
    UPROPERTY(EditDefaultsOnly)
    float _palletPulldownBlockTime[3];
    
public:
    UHexBloodFavor();
};

