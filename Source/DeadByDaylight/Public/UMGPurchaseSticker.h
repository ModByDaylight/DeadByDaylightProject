#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGPurchaseSticker.generated.h"

class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGPurchaseSticker : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* TextDiscount;
    
public:
    UUMGPurchaseSticker();
};

