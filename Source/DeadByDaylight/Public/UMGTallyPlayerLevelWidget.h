#pragma once
#include "CoreMinimal.h"
#include "UMGTallyListElementWidget.h"
#include "XpBonusData.h"
#include "PlayerLevelData.h"
#include "RewardItemData.h"
#include "UMGTallyPlayerLevelWidget.generated.h"

UCLASS(EditInlineNew)
class UUMGTallyPlayerLevelWidget : public UUMGTallyListElementWidget {
    GENERATED_BODY()
public:
    UUMGTallyPlayerLevelWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetInitialPlayerXp(int32 initialXp, const FPlayerLevelData& initialLevelData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetFinalPlayerXp(int32 finalXp, const TArray<FPlayerLevelData>& reachedLevels, const TArray<FXpBonusData>& xpBonuses, const TArray<FRewardItemData>& rewardsEarned);
    
    UFUNCTION(BlueprintPure)
    TArray<FXpBonusData> GetXpBonuses() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FRewardItemData> GetRewardsEarned() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FPlayerLevelData> GetReachedLevels() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetInitialXp() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetFinalXp() const;
    
};

