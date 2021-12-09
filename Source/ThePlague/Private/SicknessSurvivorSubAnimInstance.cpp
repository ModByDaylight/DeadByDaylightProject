#include "SicknessSurvivorSubAnimInstance.h"

USicknessSurvivorSubAnimInstance::USicknessSurvivorSubAnimInstance() {
    this->_vomitingEnteredStatEvent = TEXT("OnEnterVomiting");
    this->_hitByVomitTime = 1.00f;
    this->_isSick = false;
    this->_isVomiting = false;
    this->_hasRecentlyBeenHitByVomit = false;
    this->_isOpeningExitGate = false;
}

