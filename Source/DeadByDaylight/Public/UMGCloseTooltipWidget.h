#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGCloseTooltipWidget.generated.h"

class UButton;

UCLASS(Abstract, EditInlineNew)
class UUMGCloseTooltipWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UButton* FullScreenButton;
    
public:
    UUMGCloseTooltipWidget();
private:
    UFUNCTION()
    void HandleCloseTooltipButton();
    
};

