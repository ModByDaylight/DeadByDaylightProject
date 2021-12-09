#pragma once
#include "CoreMinimal.h"
#include "BaseSingleStructIndexAnalytics.h"
#include "BloodMarketTransactionAnalytics.generated.h"

USTRUCT()
struct FBloodMarketTransactionAnalytics : public FBaseSingleStructIndexAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString ItemId;
    
    UPROPERTY()
    FString CurrencyUsed;
    
    UPROPERTY()
    int32 CurrencyCost;
    
    UPROPERTY()
    int32 CurrencyRemaining;
    
    UPROPERTY()
    bool IsNextRowUnlocked;
    
    UPROPERTY()
    int32 NumberOfItemsBoughtOnRow;
    
    UPROPERTY()
    int32 RowIndex;
    
    UPROPERTY()
    FString CharacterRole;
    
    DBDANALYTICS_API FBloodMarketTransactionAnalytics();
};

