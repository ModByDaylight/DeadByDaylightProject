#include "UMGTallyBloodpointsWidget.h"





UUMGTallyBloodpointsWidget::UUMGTallyBloodpointsWidget() {
    this->_itemBoxVisibility = ESlateVisibility::Hidden;
    this->_labelTotalScore = FText::FromString(TEXT("TOTAL SCORE"));
    this->_labelItemAddOnTitle = FText::FromString(TEXT("ADD-ONS"));
    this->BoxScoreCategory = NULL;
}

