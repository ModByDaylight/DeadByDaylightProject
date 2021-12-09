#pragma once
#include "CoreMinimal.h"
#include "TransactionEventData.generated.h"

USTRUCT()
struct FTransactionEventData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FString TransactionType;
    
    UPROPERTY(Transient)
    FString TransactionSource;
    
    UPROPERTY(Transient)
    FString SourceId;
    
    UPROPERTY(Transient)
    int32 SourceTier;
    
    UPROPERTY(Transient)
    FString CurrencyType;
    
    UPROPERTY(Transient)
    int32 CurrencyAmount;
    
    UPROPERTY(Transient)
    int32 CurrencyBalance;
    
    UPROPERTY(Transient)
    int32 LevelAchieved;
    
    UPROPERTY(Transient)
    int32 Prestige;
    
    UPROPERTY(Transient)
    FString ItemIDAcquired;
    
    UPROPERTY(Transient)
    int32 Rank;
    
    UPROPERTY(Transient)
    FString SelectedCharacter;
    
    UPROPERTY(Transient)
    bool TransactionTriggeredLevelUp;
    
    DEADBYDAYLIGHT_API FTransactionEventData();
};

