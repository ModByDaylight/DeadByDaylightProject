#include "DBDEmblem_KillerChaser.h"

class ADBDPlayer;

void UDBDEmblem_KillerChaser::OnChaseStart(ADBDPlayer* chasedPlayer) {
}

UDBDEmblem_KillerChaser::UDBDEmblem_KillerChaser() {
    this->_chasePointsByDurationCurve = NULL;
    this->_rankTunablesClass = NULL;
}

