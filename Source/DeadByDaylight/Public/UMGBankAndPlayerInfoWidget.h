#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "OnButtonClickEventDelegate.h"
#include "TooltipPressedData.h"
#include "ECurrencyType.h"
#include "UMGBankAndPlayerInfoWidget.generated.h"

class UUMGBankWidget;
class UTextBlock;
class UUMGSelectedCharacterWidget;
class UUMGLevelBannerWidget;
class UUMGRankBanner;
class UUMGMainMenuMonthlyPassButton;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGBankAndPlayerInfoWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGBankWidget* BankWidget;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* PlayerNameText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGSelectedCharacterWidget* SelectedCharacterWidget;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    ESlateVisibility RankWidgetVisibility;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGLevelBannerWidget* LevelBanner;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGRankBanner* RankBanner;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGMainMenuMonthlyPassButton* MonthlyPassButton;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnButtonClickEvent _onCancelPartyButtonClickedEvent;
    
public:
    UUMGBankAndPlayerInfoWidget();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetPlayerLevelBP(int32 level, int32 devotion, int32 currentLevelXp, int32 totalLevelXp, bool isSlasher, bool playUpdateAnim);
    
private:
    UFUNCTION()
    void OnTooltipTriggeredByRankBanner(const FTooltipPressedData& tooltipPressedData);
    
public:
    UFUNCTION()
    void OnTooltipTriggeredByLevelBannerWidget(const FTooltipPressedData& tooltipPressedData);
    
private:
    UFUNCTION()
    void OnTooltipTriggeredByCurrency(const FTooltipPressedData& tooltipPressedData, const ECurrencyType currencyType);
    
public:
    UFUNCTION()
    void OnPurchaseAuricCellsButtonClicked();
    
    UFUNCTION()
    void OnPrestigeButtonClicked();
    
    UFUNCTION()
    void OnMainMenuSubscriptionClicked();
    
private:
    UFUNCTION()
    void OnCancelPartyButtonClicked();
    
};

