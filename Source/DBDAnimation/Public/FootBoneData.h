#pragma once
#include "CoreMinimal.h"
#include "FootBoneData.generated.h"

class UCurveVector;

USTRUCT(BlueprintType)
struct FFootBoneData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UCurveVector* RightFootCurve;
    
    UPROPERTY(Transient)
    UCurveVector* LeftFootCurve;
    
    DBDANIMATION_API FFootBoneData();
};

