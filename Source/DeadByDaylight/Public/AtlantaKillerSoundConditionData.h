#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EKillerSoundComparisonType.h"
#include "AtlantaKillerSoundConditionData.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaKillerSoundConditionData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName RTPCAudioID;
    
    UPROPERTY(EditAnywhere)
    float ComparisonValue;
    
    UPROPERTY(EditAnywhere)
    EKillerSoundComparisonType ValueComparisonType;
    
    DEADBYDAYLIGHT_API FAtlantaKillerSoundConditionData();
};

