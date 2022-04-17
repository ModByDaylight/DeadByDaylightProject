#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGPromoPackSelectedItemWidget.generated.h"

class UUMGHtmlRichText;
class UImage;
class UTextBlock;
class UNamedSlot;
class UUMGPromoPackItemWidget;
class UScrollBox;

UCLASS(Abstract, EditInlineNew)
class UUMGPromoPackSelectedItemWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UUMGHtmlRichText* ItemDescription;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* ItemTypeIcon;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* ItemName;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* ItemSubtitle;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UNamedSlot* SelectedItemSlot;
    
    UPROPERTY(Export, Transient)
    UUMGPromoPackItemWidget* SelectedItem;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UScrollBox* ScrollBox;
    
public:
    UUMGPromoPackSelectedItemWidget();
};

