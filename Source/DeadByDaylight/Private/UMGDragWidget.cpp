#include "UMGDragWidget.h"

class UCustomWidgetWrapper_HudEditor;

void UUMGDragWidget::SetClampToViewportDirty() {
}

TArray<UCustomWidgetWrapper_HudEditor*> UUMGDragWidget::GetAllEditableWidgets() const {
    return TArray<UCustomWidgetWrapper_HudEditor*>();
}

UUMGDragWidget::UUMGDragWidget() : UUserWidget(FObjectInitializer::Get()) {
}

