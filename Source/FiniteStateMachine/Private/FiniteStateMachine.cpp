#include "FiniteStateMachine.h"

UFiniteStateMachine::UFiniteStateMachine() {
    this->_defaultStateClass = NULL;
    this->_currentState = NULL;
    this->_currentStateMachineStatus = EFiniteStateMachineStatus::Stopped;
    this->_stateMachineOwner = NULL;
}

