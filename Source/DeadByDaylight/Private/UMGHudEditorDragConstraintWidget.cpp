#include "UMGHudEditorDragConstraintWidget.h"

UUMGHudEditorDragConstraintWidget::UUMGHudEditorDragConstraintWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->LinkSizeBox = NULL;
    this->_childWidget = NULL;
    this->_parentWidget = NULL;
}

