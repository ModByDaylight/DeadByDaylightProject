#pragma once
#include "CoreMinimal.h"
#include "BasePerkAnalytics.h"
#include "KnockoutSurvivorFoundAnalytics.generated.h"

USTRUCT()
struct FKnockoutSurvivorFoundAnalytics : public FBasePerkAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString RescuingSurvivorMirrorsId;
    
    UPROPERTY()
    FString FoundSurvivorMirrorsId;
    
    DBDANALYTICS_API FKnockoutSurvivorFoundAnalytics();
};

