#include "UMGTallyScoreboardWidget.h"


void UUMGTallyScoreboardWidget::HandleReportEvent(const FString& playerID) {
}

void UUMGTallyScoreboardWidget::HandleAddFriendEvent(const FString& playerID) {
}

UUMGTallyScoreboardWidget::UUMGTallyScoreboardWidget() {
    this->LabelTextRank = FText::FromString(TEXT("GRADE"));
    this->LabelTextScore = FText::FromString(TEXT("SCORE"));
    this->LabelTextStatus = FText::FromString(TEXT("STATUS"));
    this->KillerWidget = NULL;
    this->FirstSurvivorWidget = NULL;
    this->SecondSurvivorWidget = NULL;
    this->ThirdSurvivorWidget = NULL;
    this->FourthSurvivorWidget = NULL;
}

