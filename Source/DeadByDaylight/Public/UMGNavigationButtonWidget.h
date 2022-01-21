#pragma once
#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGNavigationButtonWidget.generated.h"

class UWidget;
class UTexture2D;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGNavigationButtonWidget : public UUMGBaseButtonWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UWidget* NotificationPanel;
    
public:
    UUMGNavigationButtonWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsSelected(bool isSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIcon(UTexture2D* Icon);
    
};

