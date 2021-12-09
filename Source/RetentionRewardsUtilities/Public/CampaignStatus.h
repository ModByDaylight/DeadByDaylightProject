#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CampaignStatus.generated.h"

USTRUCT()
struct RETENTIONREWARDSUTILITIES_API FCampaignStatus {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    bool IsValid;
    
    UPROPERTY(Transient)
    FDateTime StartDate;
    
    UPROPERTY(Transient)
    FDateTime EndDate;
    
    FCampaignStatus();
};

