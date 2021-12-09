#pragma once
#include "CoreMinimal.h"
#include "BaseSingleStructIndexAnalytics.h"
#include "MobileCdnDownloadAnalytics.generated.h"

USTRUCT()
struct FMobileCdnDownloadAnalytics : public FBaseSingleStructIndexAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString CdnDownloadState;
    
    UPROPERTY()
    int32 CdnDownloadTimeInSeconds;
    
    DBDANALYTICS_API FMobileCdnDownloadAnalytics();
};

