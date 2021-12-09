#pragma once
#include "CoreMinimal.h"
#include "ArmIKSensorDatum.generated.h"

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FArmIKSensorDatum {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ShoulderBoneName;
    
    FArmIKSensorDatum();
};

