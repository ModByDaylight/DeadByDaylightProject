#include "BTService_FindInteractor.h"

UBTService_FindInteractor::UBTService_FindInteractor() {
    this->SearchInterval = 1.50f;
    this->SearchHeightAmplifierActivationHeight = 350.00f;
    this->SearchHeightAmplifier = 3.00f;
    this->FilterClass = NULL;
    this->RegisterAsDiscoveredWhenFound = true;
    this->RejectIfTerrorIsCloserThanSelfMargin = -1.00f;
    this->RejectIfInTerrorRadius = 0.00f;
    this->RejectIfInPressureZone = false;
    this->UseLastKnownPositionForTerrorRejects = false;
    this->RejectIfWasInCooldownAndFocusedOnAnotherObject = true;
    this->AbandonIfInChase = false;
    this->RejectIfFocusedByOther = true;
    this->RejectIfNotFocusedBySelf = true;
    this->IgnoreFocusFilterInEndgameCollapse = false;
    this->RejectIfNotInSight = false;
    this->IgnoreSightFilterIfDiscovered = false;
    this->IgnoreSightFilterIfInRange = false;
    this->RejectAboveRange = -1.00f;
    this->IgnoreRangeFilterIfDiscovered = false;
    this->IgnoreRangeFilterIfInSight = false;
    this->_goalInteractor = NULL;
    this->_aiOwner = NULL;
}

