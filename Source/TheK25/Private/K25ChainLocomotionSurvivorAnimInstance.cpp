#include "K25ChainLocomotionSurvivorAnimInstance.h"

class AK25Chain;
class UChargeableComponent;
class AK25SurvivorChainAttachmentAnchor;
class UK25SurvivorChainAttachmentComponent;

void UK25ChainLocomotionSurvivorAnimInstance::OnRemoveChainChargePercentageChanged(UChargeableComponent* chargeableComponent, float completionPercentage) {
}

void UK25ChainLocomotionSurvivorAnimInstance::OnChainDetached(AK25Chain* chain, AK25SurvivorChainAttachmentAnchor* chainAttachmentAnchor, EK25ChainDetachmentReason detachmentReason) {
}

void UK25ChainLocomotionSurvivorAnimInstance::OnChainAttached(AK25Chain* chain, AK25SurvivorChainAttachmentAnchor* chainAttachmentAnchor) {
}

bool UK25ChainLocomotionSurvivorAnimInstance::IsSolvingLamentConfiguration() const {
    return false;
}

bool UK25ChainLocomotionSurvivorAnimInstance::HasChainsAttached() const {
    return false;
}

UK25SurvivorChainAttachmentComponent* UK25ChainLocomotionSurvivorAnimInstance::GetSurvivorChainAttachmentComponent() const {
    return NULL;
}

FK25SurvivorChainAttachmentData UK25ChainLocomotionSurvivorAnimInstance::GetDetachingChainAnchorData() const {
    return FK25SurvivorChainAttachmentData{};
}

TArray<AK25SurvivorChainAttachmentAnchor*> UK25ChainLocomotionSurvivorAnimInstance::GetChainAttachmentAnchors() const {
    return TArray<AK25SurvivorChainAttachmentAnchor*>();
}



UK25ChainLocomotionSurvivorAnimInstance::UK25ChainLocomotionSurvivorAnimInstance() {
    this->_hasChainsAttached = false;
    this->_breakChainInteractionCompletionPercentage = 0.00f;
    this->_isPerformingBreakChainInteraction = false;
    this->_forwardDirectionDotProductResult = 0.00f;
    this->_lateralDirectionDotProductResult = 0.00f;
    this->_currentChainBeingDetached = NULL;
    this->_chainDirection = EK25ChainAnchorPointDirection::Front;
    this->_lastDetatchedChainDirection = EK25ChainAnchorPointDirection::Front;
    this->_hasBrokenFreeFromChain = false;
    this->_hasBrokenFreeTime = 0.50f;
    this->_hasBeenHitByChain = false;
    this->_hasBeenHitByChainTime = 0.35f;
    this->_numberOfChainsAttached = 0;
}

