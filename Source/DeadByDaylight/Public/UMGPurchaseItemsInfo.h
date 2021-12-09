#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGPurchaseItemsInfo.generated.h"

class UImage;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGPurchaseItemsInfo : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* Icon;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* Quantity;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* ItemName;
    
public:
    UUMGPurchaseItemsInfo();
};

