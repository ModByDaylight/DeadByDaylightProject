#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "EPlayerRole.h"
#include "LoadoutBaseAnalytics.generated.h"

USTRUCT()
struct FLoadoutBaseAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString LoadoutItem;
    
    UPROPERTY()
    FString LoadoutItemAddOn1;
    
    UPROPERTY()
    FString LoadoutItemAddOn2;
    
    UPROPERTY()
    FString LoadoutPerk1;
    
    UPROPERTY()
    FString LoadoutPerk2;
    
    UPROPERTY()
    FString LoadoutPerk3;
    
    UPROPERTY()
    FString LoadoutPerk4;
    
    UPROPERTY()
    FString LoadoutOffering;
    
    UPROPERTY()
    EPlayerRole Role;
    
    UPROPERTY()
    int32 Rank;
    
    DBDANALYTICS_API FLoadoutBaseAnalytics();
};

