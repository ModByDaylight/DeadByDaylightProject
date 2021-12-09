#pragma once
#include "CoreMinimal.h"
#include "RewardViewData.h"
#include "CharacterTooltipViewData.h"
#include "CharacterRewardViewData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct DBDUIVIEWINTERFACES_API FCharacterRewardViewData : public FRewardViewData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    UTexture2D* IconTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool IsOwned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    int32 Prestige;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    FCharacterTooltipViewData TooltipData;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsEnabled;
    
    FCharacterRewardViewData();
};

