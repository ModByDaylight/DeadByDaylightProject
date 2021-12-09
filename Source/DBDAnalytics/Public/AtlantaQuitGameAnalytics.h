#pragma once
#include "CoreMinimal.h"
#include "BaseSingleStructIndexAnalytics.h"
#include "AtlantaQuitGameAnalytics.generated.h"

USTRUCT()
struct FAtlantaQuitGameAnalytics : public FBaseSingleStructIndexAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString QuitGameReason;
    
    DBDANALYTICS_API FAtlantaQuitGameAnalytics();
};

