#pragma once
#include "CoreMinimal.h"
#include "UMGBaseCurrencyStorefrontWidget.h"
#include "Layout/Margin.h"
#include "UMGAtlCurrencyStorefrontWidget.generated.h"

class UImage;
class UUMGStoreEventItemsPackButton;
class UUniformGridPanel;
class UCanvasPanel;
class UHorizontalBox;
class URichTextBlock;
class UOverlay;
class UUMGStoreAuricCellButton;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlCurrencyStorefrontWidget : public UUMGBaseCurrencyStorefrontWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* AuricCellsCanvasPanel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UUniformGridPanel* AuricCellsGridPanel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UHorizontalBox* BottomPurchaseBox;
    
    UPROPERTY(BlueprintReadOnly, Export)
    URichTextBlock* BottomRightPurchaseRichText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UOverlay* BottomTimer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* AuricsBgR;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* AuricsBgL;
    
private:
    UPROPERTY(Export)
    UHorizontalBox* EventItemsPackContainerBox;
    
    UPROPERTY(EditDefaultsOnly)
    FMargin PaddingEventItemsPackButton;
    
    UPROPERTY(EditDefaultsOnly, NoClear)
    TSoftClassPtr<UUMGStoreEventItemsPackButton> EventItemsPackWidgetClass;
    
    UPROPERTY(Export, Transient)
    TArray<UUMGStoreAuricCellButton*> _auricCellButtons;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateFirstPurchaseForAllAuricCellsEndInUI(const FString& endInText);
    
public:
    UUMGAtlCurrencyStorefrontWidget();
};

