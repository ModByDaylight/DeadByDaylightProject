#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UMGDragWidget.generated.h"

class UCustomWidgetWrapper_HudEditor;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGDragWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UUMGDragWidget();
    UFUNCTION(BlueprintCallable)
    void SetClampToViewportDirty();
    
    UFUNCTION(BlueprintPure)
    TArray<UCustomWidgetWrapper_HudEditor*> GetAllEditableWidgets() const;
    
};

