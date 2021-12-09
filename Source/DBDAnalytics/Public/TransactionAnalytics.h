#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "TransactionAnalytics.generated.h"

USTRUCT()
struct FTransactionAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString TransactionType;
    
    UPROPERTY()
    FString TransactionSource;
    
    UPROPERTY()
    FString SourceId;
    
    UPROPERTY()
    int32 SourceTier;
    
    UPROPERTY()
    FString CurrencyType;
    
    UPROPERTY()
    int32 CurrencyAmount;
    
    UPROPERTY()
    int32 CurrencyBalance;
    
    UPROPERTY()
    int32 LevelAchieved;
    
    UPROPERTY()
    int32 Prestige;
    
    UPROPERTY()
    FString ItemIDAcquired;
    
    UPROPERTY()
    int32 Rank;
    
    UPROPERTY()
    FString SelectedCharacter;
    
    UPROPERTY()
    bool TransactionTriggeredLevelUp;
    
    DBDANALYTICS_API FTransactionAnalytics();
};

