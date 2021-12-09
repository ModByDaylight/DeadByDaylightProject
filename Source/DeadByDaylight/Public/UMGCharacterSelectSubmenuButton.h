#pragma once
#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGCharacterSelectSubmenuButton.generated.h"

class UCanvasPanel;

UCLASS(Abstract, EditInlineNew)
class UUMGCharacterSelectSubmenuButton : public UUMGBaseButtonWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* NotificationPanel;
    
public:
    UUMGCharacterSelectSubmenuButton();
};

