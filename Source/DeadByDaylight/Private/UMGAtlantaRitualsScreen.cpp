#include "UMGAtlantaRitualsScreen.h"


void UUMGAtlantaRitualsScreen::BroadcastOnClaimRewardButtonPressed(const int32 ritualId) {
}

void UUMGAtlantaRitualsScreen::BroadcastOnBackButtonPressed() {
}

UUMGAtlantaRitualsScreen::UUMGAtlantaRitualsScreen() {
    this->DailyTab = NULL;
    this->WeeklyTab = NULL;
    this->_atlantaRitualTitle = FText::FromString(TEXT("RITUALS"));
    this->_endInLabel = FText::FromString(TEXT("END IN "));
    this->_dailyButtonLabel = FText::FromString(TEXT("DAILY"));
    this->_weeklyButtonLabel = FText::FromString(TEXT("WEEKLY"));
}

