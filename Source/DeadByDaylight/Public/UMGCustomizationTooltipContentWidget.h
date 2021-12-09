#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGCustomizationTooltipContentWidget.generated.h"

class UUMGHtmlRichText;
class UUMGCustomizationInfoWidget;
class UUMGCustomizationItemPriceWidget;

UCLASS(Abstract, EditInlineNew)
class UUMGCustomizationTooltipContentWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGHtmlRichText* ItemDescription;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGCustomizationInfoWidget* OutfitInformation;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGCustomizationInfoWidget* RoleInformation;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGCustomizationInfoWidget* ReplacementInformation;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGCustomizationItemPriceWidget* AuricCellsPrice;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGCustomizationItemPriceWidget* IridescentShardsPrice;
    
public:
    UUMGCustomizationTooltipContentWidget();
};

