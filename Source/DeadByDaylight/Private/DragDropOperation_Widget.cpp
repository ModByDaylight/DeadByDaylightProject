#include "DragDropOperation_Widget.h"

UDragDropOperation_Widget::UDragDropOperation_Widget() {
    this->Widget = NULL;
    this->WidgetParent = NULL;
    this->WidgetLocalOpacity = 1.00f;
    this->WidgetSlotAutoSize = false;
    this->WidgetSlotZOrder = 0;
    this->ChildLinkWidget = NULL;
}

