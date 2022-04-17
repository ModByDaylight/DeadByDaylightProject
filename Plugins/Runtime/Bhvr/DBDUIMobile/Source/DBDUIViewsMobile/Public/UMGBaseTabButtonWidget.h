#pragma once
#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGBaseTabButtonWidget.generated.h"

class UImage;
class UTextBlock;
class URichTextBlock;
class UCanvasPanel;

UCLASS(Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGBaseTabButtonWidget : public UUMGBaseButtonWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    URichTextBlock* TabText;
    
    UPROPERTY(Export)
    UTextBlock* NotificationCountText;
    
    UPROPERTY(Export)
    UCanvasPanel* NotificationPanel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* TabButtonSelected;
    
    UPROPERTY(EditInstanceOnly)
    uint8 TabIndex;
    
    UPROPERTY(EditInstanceOnly)
    FText TitleOfTab;
    
private:
    UPROPERTY(Transient)
    FString _tabTextParameter;
    
public:
    UUMGBaseTabButtonWidget();
};

