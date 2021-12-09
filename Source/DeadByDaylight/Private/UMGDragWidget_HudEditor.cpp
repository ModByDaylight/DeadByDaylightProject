#include "UMGDragWidget_HudEditor.h"

class UCustomWidgetWrapper_HudEditor;

void UUMGDragWidget_HudEditor::SetOnSelection_Implementation(bool isSelected) {
}

UCustomWidgetWrapper_HudEditor* UUMGDragWidget_HudEditor::GetCustomWrapper() const {
    return NULL;
}

UUMGDragWidget_HudEditor::UUMGDragWidget_HudEditor() {
    this->OnSelectionWidgetClass = NULL;
    this->DragLinkWidgetClass = NULL;
    this->_customWrapper = NULL;
    this->_selectionWidget = NULL;
    this->_dragLinkWidget = NULL;
    this->_parentLinkWidget = NULL;
    this->_childLinkWidget = NULL;
}

