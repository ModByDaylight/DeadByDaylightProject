#pragma once
#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGPurchaseBuyButton.generated.h"

class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGPurchaseBuyButton : public UUMGBaseButtonWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* PriceText;
    
public:
    UUMGPurchaseBuyButton();
};

