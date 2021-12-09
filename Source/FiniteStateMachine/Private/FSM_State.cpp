#include "FSM_State.h"

UFSM_State::UFSM_State() {
    this->_shouldTick = false;
    this->_defaultChildStateClass = NULL;
    this->_stateMachine = NULL;
    this->_parentState = NULL;
    this->_currentChildState = NULL;
    this->_startTimestamp = 0.00f;
}

