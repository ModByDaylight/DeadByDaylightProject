#pragma once
#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGNavigationButtonWidget.generated.h"

class UTexture2D;
class UWidget;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGNavigationButtonWidget : public UUMGBaseButtonWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UWidget* NotificationPanel;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsSelected(bool isSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIcon(UTexture2D* Icon);
    
    UUMGNavigationButtonWidget();
};

