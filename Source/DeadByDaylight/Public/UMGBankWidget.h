#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "TooltipPressedData.h"
#include "ECurrencyType.h"
#include "UMGBankWidget.generated.h"

class UUMGCurrencyWidget;
class UUMGAuricCellsButton;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGBankWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGCurrencyWidget* BloodPointsCurrency;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGAuricCellsButton* CellsButton;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGCurrencyWidget* IridescentShardsCurrency;
    
public:
    UUMGBankWidget();
protected:
    UFUNCTION()
    void OnPurchaseAuricCellsClicked();
    
    UFUNCTION()
    void OnCurrencyTooltipRequested(const FTooltipPressedData& tooltipPressedData, const ECurrencyType currencyType);
    
};

