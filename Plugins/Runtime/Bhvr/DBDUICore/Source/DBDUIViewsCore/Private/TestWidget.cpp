#include "TestWidget.h"

void UTestWidget::SetShowWorkbench(bool NewShowWorkbench) {
}

UTestWidget::UTestWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Workbench = NULL;
    this->ShowWorkbench = false;
}

