#include "ResetBearTrapInteraction.h"

UResetBearTrapInteraction::UResetBearTrapInteraction() {
    this->_enterMontageIDForBeartrap = TEXT("BearTrapSet_In");
    this->_udpateMontageIDForBeartrap = TEXT("BearTrapSet_Middle");
    this->_updateSequenceForBeartrap = NULL;
    this->_exitMontageForIDBeartrap = TEXT("BearTrapSet_Out");
    this->_cancelExitMontage = TEXT("BearTrapSet_Cancel");
}

