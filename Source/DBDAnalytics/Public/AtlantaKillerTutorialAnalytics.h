#pragma once
#include "CoreMinimal.h"
#include "BaseSingleStructIndexAnalytics.h"
#include "AtlantaKillerTutorialAnalytics.generated.h"

USTRUCT()
struct FAtlantaKillerTutorialAnalytics : public FBaseSingleStructIndexAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool KillerTutorialCompleted;
    
    UPROPERTY()
    bool KillerTutorialSkipped;
    
    DBDANALYTICS_API FAtlantaKillerTutorialAnalytics();
};

