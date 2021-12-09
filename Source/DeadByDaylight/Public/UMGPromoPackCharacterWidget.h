#pragma once
#include "CoreMinimal.h"
#include "UMGPromoPackItemWidget.h"
#include "UMGPromoPackCharacterWidget.generated.h"

class UCanvasPanel;

UCLASS(Abstract, EditInlineNew)
class UUMGPromoPackCharacterWidget : public UUMGPromoPackItemWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* OwnedPanel;
    
public:
    UUMGPromoPackCharacterWidget();
};

