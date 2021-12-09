#pragma once
#include "CoreMinimal.h"
#include "UMGCurrencyWidget.h"
#include "UMGAuricCellsButton.generated.h"

class UImage;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGAuricCellsButton : public UUMGCurrencyWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* PlusImage;
    
public:
    UUMGAuricCellsButton();
};

