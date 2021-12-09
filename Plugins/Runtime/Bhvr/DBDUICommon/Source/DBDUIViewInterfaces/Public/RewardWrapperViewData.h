#pragma once
#include "CoreMinimal.h"
#include "CustomizationRewardViewData.h"
#include "ERewardType.h"
#include "CharacterRewardViewData.h"
#include "CurrencyProgressionRewardViewData.h"
#include "RewardWrapperViewData.generated.h"

USTRUCT(BlueprintType)
struct DBDUIVIEWINTERFACES_API FRewardWrapperViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERewardType RewardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCharacterRewardViewData CharacterRewardViewData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCurrencyProgressionRewardViewData CurrencyProgressionRewardViewData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCustomizationRewardViewData CustomizationRewardViewData;
    
    FRewardWrapperViewData();
};

