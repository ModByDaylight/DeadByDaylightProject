#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlStorePriceWidget.generated.h"

class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlStorePriceWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UTextBlock* PriceText;
    
public:
    UUMGAtlStorePriceWidget();
};

