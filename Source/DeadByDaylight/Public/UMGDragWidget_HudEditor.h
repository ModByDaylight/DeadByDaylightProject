#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UMGDragWidget.h"
#include "UMGDragWidget_HudEditor.generated.h"

class UCustomWidgetWrapper_HudEditor;
class UUMGDragWidget_HudEditor;
class UUMGHudEditorDragConstraintWidget;
class UUserWidget;

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
    UUMGDragWidget_HudEditor();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetOnSelection(bool isSelected);
    
    UFUNCTION(BlueprintPure)
    UCustomWidgetWrapper_HudEditor* GetCustomWrapper() const;
    
};

