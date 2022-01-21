#pragma once
#include "CoreMinimal.h"
#include "ArchiveBaseScreen.h"
#include "ArchiveRewardsScreen.generated.h"

UCLASS()
class UArchiveRewardsScreen : public UArchiveBaseScreen {
    GENERATED_BODY()
public:
    UArchiveRewardsScreen();
private:
    UFUNCTION()
    void OnRotateCharacter(float mouseDistanceChange);
    
    UFUNCTION()
    void OnRewardItemClicked(const FString& itemId);
    
    UFUNCTION()
    void OnRewardCurrencyClicked(int32 currencyType);
    
    UFUNCTION()
    void OnPurchaseTier();
    
    UFUNCTION()
    void OnPurchasePremiumPass();
    
};

