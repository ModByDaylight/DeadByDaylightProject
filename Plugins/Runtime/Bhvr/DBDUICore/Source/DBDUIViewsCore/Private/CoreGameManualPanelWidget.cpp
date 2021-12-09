#include "CoreGameManualPanelWidget.h"

class UCoreSelectableButtonWidget;

void UCoreGameManualPanelWidget::ToggleGameManualMenuState() {
}

void UCoreGameManualPanelWidget::ShowHelpTopics(EHelpType categoryType) {
}

void UCoreGameManualPanelWidget::SetGameManualMenuState(EGameManualMenuState menuState) {
}

void UCoreGameManualPanelWidget::SetCurrentOnbardingMenuSubtitle() {
}


void UCoreGameManualPanelWidget::OnTopicsTabSelected(UCoreSelectableButtonWidget* selectedButton) {
}

UCoreGameManualPanelWidget::UCoreGameManualPanelWidget() {
    this->_currentSelectedManualMenu = EGameManualMenuState::Categories;
    this->_currentGameManualTopic = EHelpType::General;
    this->CategoryPanel = NULL;
    this->GameCategoryButton = NULL;
    this->SurvivorCategoryButton = NULL;
    this->KillerCategoryButton = NULL;
    this->TopicsPanel = NULL;
    this->GameManualTopicsTabs = NULL;
    this->GameManualContentTitle = NULL;
    this->GameManualContentSubtitle = NULL;
    this->GameManualContentText = NULL;
}

