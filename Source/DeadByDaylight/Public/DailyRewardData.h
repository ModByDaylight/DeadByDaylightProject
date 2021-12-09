#pragma once
#include "CoreMinimal.h"
#include "EAtlantaRewardType.h"
#include "EItemRarity.h"
#include "EUMGDailyRewardWidgetState.h"
#include "DailyRewardData.generated.h"

USTRUCT(BlueprintType)
struct FDailyRewardData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    EAtlantaRewardType RewardType;
    
    UPROPERTY(Transient)
    int32 CurrencyAmount;
    
    UPROPERTY(Transient)
    FString IconPath;
    
    UPROPERTY(Transient)
    FString ParentIconPath;
    
    UPROPERTY(Transient)
    FString ItemName;
    
    UPROPERTY(Transient)
    int32 Index;
    
    UPROPERTY(Transient)
    bool IsMarkedSpecial;
    
    UPROPERTY(Transient)
    EItemRarity ItemRarity;
    
    UPROPERTY(Transient)
    EUMGDailyRewardWidgetState State;
    
    DEADBYDAYLIGHT_API FDailyRewardData();
};

