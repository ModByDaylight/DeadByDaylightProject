#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "AtlantaNoiseIndicatorDistanceData.generated.h"

USTRUCT()
struct FAtlantaNoiseIndicatorDistanceData : public FDBDTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Description;
    
    UPROPERTY(EditAnywhere)
    float DistanceForNoiseIndicatorToAppear;
    
    DEADBYDAYLIGHT_API FAtlantaNoiseIndicatorDistanceData();
};

