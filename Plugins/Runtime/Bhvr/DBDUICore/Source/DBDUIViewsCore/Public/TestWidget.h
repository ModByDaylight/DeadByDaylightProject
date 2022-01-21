#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TestWidget.generated.h"

class UPanelWidget;

UCLASS(EditInlineNew)
class UTestWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UPanelWidget* Workbench;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowWorkbench;
    
public:
    UTestWidget();
    UFUNCTION(BlueprintCallable)
    void SetShowWorkbench(bool NewShowWorkbench);
    
};

