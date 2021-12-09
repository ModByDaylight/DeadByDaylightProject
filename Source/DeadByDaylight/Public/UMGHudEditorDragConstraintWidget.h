#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UMGHudEditorDragConstraintWidget.generated.h"

class USizeBox;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGHudEditorDragConstraintWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    USizeBox* LinkSizeBox;
    
private:
    UPROPERTY(Export, Transient)
    UUserWidget* _childWidget;
    
    UPROPERTY(Export, Transient)
    UUserWidget* _parentWidget;
    
public:
    UUMGHudEditorDragConstraintWidget();
};

