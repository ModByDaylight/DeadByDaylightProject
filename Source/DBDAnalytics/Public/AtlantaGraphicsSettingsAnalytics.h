#pragma once
#include "CoreMinimal.h"
#include "BaseSingleStructIndexAnalytics.h"
#include "AtlantaGraphicsSettingsAnalytics.generated.h"

USTRUCT()
struct FAtlantaGraphicsSettingsAnalytics : public FBaseSingleStructIndexAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 scalabilityValue;
    
    UPROPERTY()
    bool isAutoScalabilitySet;
    
    UPROPERTY()
    int32 fpsValue;
    
    DBDANALYTICS_API FAtlantaGraphicsSettingsAnalytics();
};

