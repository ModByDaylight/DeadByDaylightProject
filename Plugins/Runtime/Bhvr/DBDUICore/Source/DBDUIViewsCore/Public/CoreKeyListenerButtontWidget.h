#pragma once
#include "CoreMinimal.h"
#include "CoreButtonWidget.h"
#include "EUIActionType.h"
#include "CoreKeyListenerButtontWidget.generated.h"

class UDBDTextBlock;

UCLASS(EditInlineNew)
class UCoreKeyListenerButtontWidget : public UCoreButtonWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UDBDTextBlock* InputNameTB;
    
public:
    UCoreKeyListenerButtontWidget();
    UFUNCTION(BlueprintCallable)
    void SetUIAction(const EUIActionType actionType);
    
};

