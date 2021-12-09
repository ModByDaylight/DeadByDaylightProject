#include "UMGTallyScoreboardWidget.h"


void UUMGTallyScoreboardWidget::HandleReportEvent(const FString& playerID) {
}

void UUMGTallyScoreboardWidget::HandleAddFriendEvent(const FString& playerID) {
}

UUMGTallyScoreboardWidget::UUMGTallyScoreboardWidget() {
    this->LabelTextRank = INVTEXT("GRADE");
    this->LabelTextScore = INVTEXT("SCORE");
    this->LabelTextStatus = INVTEXT("STATUS");
    this->KillerWidget = NULL;
    this->FirstSurvivorWidget = NULL;
    this->SecondSurvivorWidget = NULL;
    this->ThirdSurvivorWidget = NULL;
    this->FourthSurvivorWidget = NULL;
}

