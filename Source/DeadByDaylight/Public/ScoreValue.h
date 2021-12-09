#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EDBDScoreCategory.h"
#include "ScoreValue.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FScoreValue : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDBDScoreCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 BloodpointValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxBloodpointValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* BloodpointDepreciationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OngoingWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText DisplayName;
    
    DEADBYDAYLIGHT_API FScoreValue();
};

