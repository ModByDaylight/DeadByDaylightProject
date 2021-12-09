#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHudScreenIndicatorType.h"
#include "ScreenIndicatorViewData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct DBDUIVIEWINTERFACES_API FScreenIndicatorViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsInFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D ScreenPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* IndicatorIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EHudScreenIndicatorType IndicatorType;
    
    FScreenIndicatorViewData();
};

