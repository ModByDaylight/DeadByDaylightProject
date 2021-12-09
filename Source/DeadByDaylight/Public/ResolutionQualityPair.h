#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "ResolutionQualityPair.generated.h"

USTRUCT(BlueprintType)
struct FResolutionQualityPair : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ResX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ResY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Quality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AutoAdjust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ScreenScaleForWindowedMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ScreenResolution;
    
    DEADBYDAYLIGHT_API FResolutionQualityPair();
};

