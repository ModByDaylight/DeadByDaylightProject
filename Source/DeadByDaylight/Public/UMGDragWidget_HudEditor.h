#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UMGDragWidget.h"
#include "UMGDragWidget_HudEditor.generated.h"

class UCustomWidgetWrapper_HudEditor;
class UUserWidget;
class UUMGHudEditorDragConstraintWidget;
class UUMGDragWidget_HudEditor;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGDragWidget_HudEditor : public UUMGDragWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUserWidget> OnSelectionWidgetClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUMGHudEditorDragConstraintWidget> DragLinkWidgetClass;
    
private:
    UPROPERTY(Export, Transient)
    UCustomWidgetWrapper_HudEditor* _customWrapper;
    
    UPROPERTY(Export, Transient)
    UUserWidget* _selectionWidget;
    
    UPROPERTY(Export, Transient)
    UUMGHudEditorDragConstraintWidget* _dragLinkWidget;
    
    UPROPERTY(Export, Transient)
    UUMGDragWidget_HudEditor* _parentLinkWidget;
    
    UPROPERTY(Export, Transient)
    UUMGDragWidget_HudEditor* _childLinkWidget;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetOnSelection(bool isSelected);
    
    UFUNCTION(BlueprintPure)
    UCustomWidgetWrapper_HudEditor* GetCustomWrapper() const;
    
    UUMGDragWidget_HudEditor();
};

