#include "RiflePlayerLinker.h"
#include "Net/UnrealNetwork.h"

class ADBDPlayer;

void URiflePlayerLinker::Server_OnClientConfirmTensionBreakChain_Implementation(ADBDPlayer* player) {
}
bool URiflePlayerLinker::Server_OnClientConfirmTensionBreakChain_Validate(ADBDPlayer* player) {
    return true;
}

void URiflePlayerLinker::Multicast_Unlink_Implementation() {
}

void URiflePlayerLinker::Multicast_Link_Implementation(ADBDPlayer* linkedPlayer) {
}

ADBDPlayer* URiflePlayerLinker::GetLinkOwner() const {
    return NULL;
}

ADBDPlayer* URiflePlayerLinker::GetLinkedPlayer() const {
    return NULL;
}

void URiflePlayerLinker::Client_OnAuthorityTensionBreakChain_Implementation(ADBDPlayer* player) {
}

void URiflePlayerLinker::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URiflePlayerLinker, _desiredLinkLength);
}

URiflePlayerLinker::URiflePlayerLinker() {
    this->_linkedPlayer = NULL;
    this->_linkedPlayerDuringAttack = NULL;
    this->_linkOwner = NULL;
    this->_desiredLinkLength = 0.00f;
    this->_movementLinkReductionThreshold = 15.00f;
    this->_movementAccelerationTreshold = 0.10f;
}

