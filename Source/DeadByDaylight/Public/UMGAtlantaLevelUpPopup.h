#pragma once
#include "CoreMinimal.h"
#include "UMGGenericPopup.h"
#include "RewardItemData.h"
#include "UMGAtlantaLevelUpPopup.generated.h"

UCLASS(EditInlineNew)
class UUMGAtlantaLevelUpPopup : public UUMGGenericPopup {
    GENERATED_BODY()
public:
    UUMGAtlantaLevelUpPopup();
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetData(int32 level, int32 prestige, bool prestigeIncreased, const TArray<FRewardItemData>& rewards);
    
};

