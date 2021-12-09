#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EDPIScaleCurveRatio.h"
#include "DPIScaleCurveForRatio.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct DBDUIMANAGERS_API FDPIScaleCurveForRatio : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDPIScaleCurveRatio Ratio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> DPIScaleCurve;
    
    FDPIScaleCurveForRatio();
};

