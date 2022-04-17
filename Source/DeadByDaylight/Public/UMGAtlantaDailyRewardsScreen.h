#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Styling/SlateColor.h"
#include "UMGAtlantaDailyRewardsScreen.generated.h"

class UUMGPopupButton;
class UCanvasPanel;
class UUMGAtlantaDailyRewardsGrid;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaDailyRewardsScreen : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGAtlantaDailyRewardsGrid* DailyRewardWidgetsGrid;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* ContinueButtonPanel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGPopupButton* ContinueButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* RemainingTimeTextBlock;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor NormalColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor WarningColor;
    
public:
    UUMGAtlantaDailyRewardsScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleCurrentActiveDailyRewardStateChanged(int32 dailyRewardIndex, int32 dailyRewardNewState);
    
    UFUNCTION(BlueprintCallable)
    void HandleContinueButtonClick();
    
};

