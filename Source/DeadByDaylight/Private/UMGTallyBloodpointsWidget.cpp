#include "UMGTallyBloodpointsWidget.h"





UUMGTallyBloodpointsWidget::UUMGTallyBloodpointsWidget() {
    this->_itemBoxVisibility = ESlateVisibility::Hidden;
    this->_labelTotalScore = INVTEXT("TOTAL SCORE");
    this->_labelItemAddOnTitle = INVTEXT("ADD-ONS");
    this->BoxScoreCategory = NULL;
}

