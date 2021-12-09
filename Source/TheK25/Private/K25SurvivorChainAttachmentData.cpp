#include "K25SurvivorChainAttachmentData.h"

FK25SurvivorChainAttachmentData::FK25SurvivorChainAttachmentData() {
    this->Direction = EK25ChainAnchorPointDirection::Front;
    this->IsFlexibleLimb = false;
    this->LimbType = EK25ChainAttachmentLimbType::Hand;
    this->_attachedSurvivor = NULL;
}

