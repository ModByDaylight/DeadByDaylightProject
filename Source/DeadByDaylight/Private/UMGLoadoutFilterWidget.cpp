#include "UMGLoadoutFilterWidget.h"

class UTexture2D;

void UUMGLoadoutFilterWidget::OnFilterButtonClicked(FName filterName) {
}

void UUMGLoadoutFilterWidget::InitFilterWidget(const TMap<FName, TSoftObjectPtr<UTexture2D>>& filtersInfo) {
}

void UUMGLoadoutFilterWidget::ClearSelectedFilter() {
}

UUMGLoadoutFilterWidget::UUMGLoadoutFilterWidget() {
    this->FilterContainerBox = NULL;
    this->SelectedFilterButton = NULL;
}

