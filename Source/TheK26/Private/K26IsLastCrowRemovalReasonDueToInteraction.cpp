#include "K26IsLastCrowRemovalReasonDueToInteraction.h"
#include "Net/UnrealNetwork.h"

class AK26AttachedCrow;
class ACamperPlayer;
class ASlasherPlayer;

void UK26IsLastCrowRemovalReasonDueToInteraction::OnSurvivorStatusIndicatorSet(AK26AttachedCrow* attachedCrow) {
}

void UK26IsLastCrowRemovalReasonDueToInteraction::OnRep_OwningAttachedCrow() {
}

void UK26IsLastCrowRemovalReasonDueToInteraction::OnLastRemovalReasonSet(FK26AttachedCrowRemovalReason lastCrowRemovalReason) {
}

void UK26IsLastCrowRemovalReasonDueToInteraction::Authority_OnSurvivorStatusIndicatorSet(const ACamperPlayer* survivor, AK26AttachedCrow* attachedCrow) {
}

void UK26IsLastCrowRemovalReasonDueToInteraction::Authority_OnKillerSet(ASlasherPlayer* killer) {
}

void UK26IsLastCrowRemovalReasonDueToInteraction::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UK26IsLastCrowRemovalReasonDueToInteraction, _owningAttachedCrow);
}

UK26IsLastCrowRemovalReasonDueToInteraction::UK26IsLastCrowRemovalReasonDueToInteraction() {
    this->_owningAttachedCrow = NULL;
    this->_statusHandlerComponent = NULL;
}

