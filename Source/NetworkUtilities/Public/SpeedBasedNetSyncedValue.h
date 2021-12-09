#pragma once
#include "CoreMinimal.h"
#include "SpeedBasedNetSyncedValue.generated.h"

USTRUCT(BlueprintType)
struct NETWORKUTILITIES_API FSpeedBasedNetSyncedValue {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    float _replicatedValue;
    
    UPROPERTY()
    float _replicatedSpeed;
    
    UPROPERTY()
    float _replicatedLastUpdateTimestamp;
    
public:
    FSpeedBasedNetSyncedValue();
};

