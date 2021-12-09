#include "StatusView.h"

class ADBDPlayer;

void AStatusView::ResetView_Implementation(const ADBDPlayer* dbdPlayer) {
}

void AStatusView::FireNotification(const FStatusViewSource statusViewSource) {
}

AStatusView::AStatusView() {
    this->IsActive = false;
    this->Level = -1;
    this->PercentageFill = 0.00f;
    this->IsClockwiseTimer = false;
    this->_localDBDPlayer = NULL;
}

