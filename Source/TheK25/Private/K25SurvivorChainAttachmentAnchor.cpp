#include "K25SurvivorChainAttachmentAnchor.h"
#include "Net/UnrealNetwork.h"

void AK25SurvivorChainAttachmentAnchor::OnRep_AttachmentData() {
}

int32 AK25SurvivorChainAttachmentAnchor::GetNumberOfChainsAttached() const {
    return 0;
}

FVector AK25SurvivorChainAttachmentAnchor::GetChainsPullLocation() const {
    return FVector{};
}

FVector AK25SurvivorChainAttachmentAnchor::GetChainsPullDirection() const {
    return FVector{};
}

float AK25SurvivorChainAttachmentAnchor::GetChainPullDirectionAngle() const {
    return 0.0f;
}

FVector AK25SurvivorChainAttachmentAnchor::GetChainAttachmentLocation_Implementation() const {
    return FVector{};
}

FK25SurvivorChainAttachmentData AK25SurvivorChainAttachmentAnchor::GetChainAttachmentData() const {
    return FK25SurvivorChainAttachmentData{};
}



void AK25SurvivorChainAttachmentAnchor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AK25SurvivorChainAttachmentAnchor, _attachmentData);
}

AK25SurvivorChainAttachmentAnchor::AK25SurvivorChainAttachmentAnchor() {
    this->_timeBetweenTrace = 0.10f;
}

