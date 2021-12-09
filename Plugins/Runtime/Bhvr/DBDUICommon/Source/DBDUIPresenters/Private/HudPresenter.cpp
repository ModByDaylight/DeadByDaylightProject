#include "HudPresenter.h"

class APawn;

void UHudPresenter::OnPawnUnpossessed(APawn* pawn) {
}

void UHudPresenter::OnPawnPossessed(APawn* pawn) {
}

UHudPresenter::UHudPresenter() {
    this->_presentedCharacter = NULL;
    this->_pendingCharacter = NULL;
    this->_spectatorPawn = NULL;
}

