#include "K25SurvivorChainAttachmentComponent.h"
#include "Net/UnrealNetwork.h"
#include "K25SurvivorChainRotationStrategy.h"

class ASlasherPlayer;
class AK25Chain;

void UK25SurvivorChainAttachmentComponent::OnRep_RemoveChainChargeableComponent() {
}

void UK25SurvivorChainAttachmentComponent::Multicast_TriggerHitSurvivorInExitAreaSFX_Implementation(ASlasherPlayer* killer) {
}

AK25Chain* UK25SurvivorChainAttachmentComponent::GetFirstChainToRelease() const {
    return NULL;
}


void UK25SurvivorChainAttachmentComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UK25SurvivorChainAttachmentComponent, _chainAttachmentAnchors);
    DOREPLIFETIME(UK25SurvivorChainAttachmentComponent, _removeChainChargeableComponent);
}

UK25SurvivorChainAttachmentComponent::UK25SurvivorChainAttachmentComponent() {
    this->_attachmentAnchorClass = NULL;
    this->_survivorChainRotationStrategyClass = UK25SurvivorChainRotationStrategy::StaticClass();
    this->_removeChainChargeableComponent = NULL;
    this->_survivorChainRotationStrategy = NULL;
    this->_chainAttachmentReplicationComponent = NULL;
}

