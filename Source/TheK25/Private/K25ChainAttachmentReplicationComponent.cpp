#include "K25ChainAttachmentReplicationComponent.h"

class AK25Chain;
class AK25SurvivorChainAttachmentAnchor;
class UK25SurvivorChainAttachmentComponent;

void UK25ChainAttachmentReplicationComponent::Multicast_StartChainReelback_Implementation(AK25Chain* chainToAttach) {
}

void UK25ChainAttachmentReplicationComponent::Multicast_LaunchInstantHitChainTowardsSurvivor_Implementation(AK25Chain* newChainToAttach, AK25SurvivorChainAttachmentAnchor* targetAnchor, const FVector& startPosition) {
}

void UK25ChainAttachmentReplicationComponent::Multicast_DetachChains_Implementation(UK25SurvivorChainAttachmentComponent* chainAttachementComponent, const TArray<AK25Chain*>& chainsToDetach, EK25ChainDetachmentReason detachmentReason, const TArray<AK25Chain*>& chainsAttached) {
}

void UK25ChainAttachmentReplicationComponent::Multicast_AttachChainToAnchor_Implementation(UK25SurvivorChainAttachmentComponent* chainAttachementComponent, AK25Chain* chainToAttach, AK25SurvivorChainAttachmentAnchor* anchorPoint) {
}

UK25ChainAttachmentReplicationComponent::UK25ChainAttachmentReplicationComponent() {
}

