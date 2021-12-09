#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlantaEventsElement.generated.h"

class UVerticalBox;
class UTextBlock;
class UUMGPromoPackItemWidget;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaEventsElement : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UVerticalBox* ImageBox;
    
    UPROPERTY(Export)
    UTextBlock* ElementName;
    
    UPROPERTY(Export)
    UUMGPromoPackItemWidget* CustomizationWidget;
    
public:
    UUMGAtlantaEventsElement();
};

