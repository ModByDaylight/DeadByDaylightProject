#include "HarpoonedSurvivorSubAnimInstance.h"

UHarpoonedSurvivorSubAnimInstance::UHarpoonedSurvivorSubAnimInstance() {
    this->_linkedMaxSpeed = 220.00f;
    this->_timeBeforeHarpoonHitReset = 0.20f;
    this->_hitHarpoonedEnterEvent = TEXT("HitHarpooned_EnterState");
    this->_chainBreakEnterEvent = TEXT("ChainBreak_EnterState");
    this->_isChainLinked = false;
    this->_isBeingReeled = false;
    this->_hasLinkInput = false;
    this->_linkInputX = 0.00f;
    this->_linkInputY = 0.00f;
    this->_chainBreakTrigger = false;
    this->_triggerHarpoonHit = false;
    this->_harpoonHitTurnAnimNormalizedStartTime = 0.00f;
    this->_harpoonHitAnimTurnRight = false;
    this->_isCrawling = false;
}

