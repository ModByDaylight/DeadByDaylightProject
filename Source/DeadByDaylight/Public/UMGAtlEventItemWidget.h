#pragma once
#include "CoreMinimal.h"
#include "EventItemsContentTypeUIData.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlEventItemWidget.generated.h"

class UImage;
class UTextBlock;
class UCanvasPanel;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlEventItemWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UImage* SquareImageBackground;
    
    UPROPERTY(Export)
    UImage* SquareRarityBackground;
    
    UPROPERTY(Export)
    UImage* SquareIcon;
    
    UPROPERTY(Export)
    UImage* PortraitImageBackground;
    
    UPROPERTY(Export)
    UImage* PortraitRarityBackground;
    
    UPROPERTY(Export)
    UImage* PortraitIcon;
    
    UPROPERTY(Export)
    UTextBlock* NameText;
    
    UPROPERTY(Export)
    UTextBlock* QuantityText;
    
    UPROPERTY(Export)
    UCanvasPanel* PortraitCanvas;
    
    UPROPERTY(Export)
    UCanvasPanel* SquareCanvas;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FEventItemsContentTypeUIData> ContentTypeUIData;
    
public:
    UUMGAtlEventItemWidget();
};

