#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "DedicatedServerPlayerEquipDisabledItemAnalytics.generated.h"

USTRUCT()
struct FDedicatedServerPlayerEquipDisabledItemAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString PlayerMirrorsId;
    
    UPROPERTY()
    FString EquipedDisabledItemIds;
    
    DBDANALYTICS_API FDedicatedServerPlayerEquipDisabledItemAnalytics();
};

