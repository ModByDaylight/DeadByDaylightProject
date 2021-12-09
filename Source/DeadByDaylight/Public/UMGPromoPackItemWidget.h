#pragma once
#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGPromoPackItemWidget.generated.h"

class UCanvasPanel;

UCLASS(Abstract, EditInlineNew)
class UUMGPromoPackItemWidget : public UUMGBaseButtonWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* SelectedPanel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* BackgroundPanel;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* AmountPanel;
    
public:
    UUMGPromoPackItemWidget();
};

