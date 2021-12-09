#include "UMGTallyEmblemsWidget.h"

class UUMGTallyEmblemWidget;

TArray<UUMGTallyEmblemWidget*> UUMGTallyEmblemsWidget::GetEmblems() const {
    return TArray<UUMGTallyEmblemWidget*>();
}

UUMGTallyEmblemsWidget::UUMGTallyEmblemsWidget() {
    this->EmblemsContainer = NULL;
}

