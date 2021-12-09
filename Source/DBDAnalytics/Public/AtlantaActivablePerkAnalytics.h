#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "AtlantaActivablePerkAnalytics.generated.h"

USTRUCT()
struct FAtlantaActivablePerkAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString PerkId;
    
    UPROPERTY()
    bool ClickedOnPerksWidget;
    
    DBDANALYTICS_API FAtlantaActivablePerkAnalytics();
};

