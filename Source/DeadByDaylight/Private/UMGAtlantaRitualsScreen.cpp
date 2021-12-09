#include "UMGAtlantaRitualsScreen.h"


void UUMGAtlantaRitualsScreen::BroadcastOnClaimRewardButtonPressed(const int32 ritualId) {
}

void UUMGAtlantaRitualsScreen::BroadcastOnBackButtonPressed() {
}

UUMGAtlantaRitualsScreen::UUMGAtlantaRitualsScreen() {
    this->DailyTab = NULL;
    this->WeeklyTab = NULL;
    this->_atlantaRitualTitle = INVTEXT("RITUALS");
    this->_endInLabel = INVTEXT("END IN ");
    this->_dailyButtonLabel = INVTEXT("DAILY");
    this->_weeklyButtonLabel = INVTEXT("WEEKLY");
}

