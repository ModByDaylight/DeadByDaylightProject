#pragma once
#include "CoreMinimal.h"
#include "BaseSingleStructIndexAnalytics.h"
#include "AtlantaPerkSelectionAnalytics.generated.h"

USTRUCT()
struct FAtlantaPerkSelectionAnalytics : public FBaseSingleStructIndexAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString CharacterName;
    
    UPROPERTY()
    int32 CharacterLevel;
    
    UPROPERTY()
    int32 CharacterPrestigeLevel;
    
    UPROPERTY()
    FString SelectedPerkId;
    
    UPROPERTY()
    int32 SelectedPerkLevel;
    
    UPROPERTY()
    bool IsSelectedPerkTeachable;
    
    UPROPERTY()
    FString NotSelectedPerkId;
    
    UPROPERTY()
    int32 NotSelectedPerkLevel;
    
    UPROPERTY()
    bool IsNotSelectedPerkTeachable;
    
    DBDANALYTICS_API FAtlantaPerkSelectionAnalytics();
};

