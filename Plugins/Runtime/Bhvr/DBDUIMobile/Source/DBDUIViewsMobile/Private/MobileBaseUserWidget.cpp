#include "MobileBaseUserWidget.h"

void UMobileBaseUserWidget::TutorialAnimationFinished() {
}

void UMobileBaseUserWidget::TryBroadcastOnHighlightWidgetClicked() {
}

void UMobileBaseUserWidget::TriggerTutorialVisuals() {
}

void UMobileBaseUserWidget::PropagateOnHighlightWidgetClicked(const FName onBoardingID) {
}


bool UMobileBaseUserWidget::IsInTutorialState() {
    return false;
}

void UMobileBaseUserWidget::FinishTutorialVisuals() {
}

UMobileBaseUserWidget::UMobileBaseUserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->HighlightWidget = NULL;
    this->_tutorialNumberOfLoops = 0;
}

