#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UMGHudEditorVersionWidget.generated.h"

class UUMGDragWidget_HudEditor;
class UButton;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGHudEditorVersionWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UButton* VersionButton;
    
private:
    UPROPERTY(Export, Transient)
    UUMGDragWidget_HudEditor* _onEditWidget;
    
public:
    UUMGHudEditorVersionWidget();
    UFUNCTION(BlueprintCallable)
    void Show();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnButtonClick();
    
public:
    UFUNCTION(BlueprintCallable)
    void Hide();
    
};

