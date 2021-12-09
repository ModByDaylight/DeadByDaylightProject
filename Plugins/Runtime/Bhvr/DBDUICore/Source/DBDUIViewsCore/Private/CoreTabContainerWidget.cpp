#include "CoreTabContainerWidget.h"

void UCoreTabContainerWidget::RemoveTabs() {
}

void UCoreTabContainerWidget::Init(const TArray<FTabWidgetData>& tabsData) {
}

UCoreTabContainerWidget::UCoreTabContainerWidget() {
    this->AlignHorizontally = true;
    this->CoreTabClass = NULL;
    this->TabContainer = NULL;
    this->UseControllerTabSwitching = false;
    this->CanLoop = false;
}

