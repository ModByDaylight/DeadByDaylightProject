#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "AtlantaControlsSettingsAnalytics.generated.h"

USTRUCT()
struct FAtlantaControlsSettingsAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool IsUsingCustomizedHuds;
    
    UPROPERTY()
    int32 NbKillerCustomizedHuds;
    
    UPROPERTY()
    int32 NbSurvivorCustomizedHuds;
    
    UPROPERTY()
    bool IsKillerInvertY;
    
    UPROPERTY()
    bool IsSurvivorInvertY;
    
    UPROPERTY()
    FString ControlType;
    
    DBDANALYTICS_API FAtlantaControlsSettingsAnalytics();
};

