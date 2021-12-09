#include "UMGPageScrollWidget.h"

void UUMGPageScrollWidget::HandlePageButtonClicked(int32 pageIndex) {
}

UUMGPageScrollWidget::UUMGPageScrollWidget() {
    this->ItemWidth = 180.00f;
    this->ItemHeight = 180.00f;
    this->RowCount = 2;
    this->ColumnCount = 6;
    this->ItemGapDistance = 5;
    this->TotalPageCount = 1;
    this->ButtonWidth = 60.00f;
    this->OnPageChangeSound = NULL;
    this->ContainerPanel = NULL;
    this->ButtonsPanel = NULL;
    this->_currentPageIndex = 0;
}

