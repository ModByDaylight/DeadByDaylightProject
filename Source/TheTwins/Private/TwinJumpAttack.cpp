#include "TwinJumpAttack.h"
#include "Net/UnrealNetwork.h"

class ADBDPlayer;

void UTwinJumpAttack::Server_StopJump_Implementation() {
}
bool UTwinJumpAttack::Server_StopJump_Validate() {
    return true;
}

void UTwinJumpAttack::Server_OnJumpStartTwin_Implementation() {
}
bool UTwinJumpAttack::Server_OnJumpStartTwin_Validate() {
    return true;
}

void UTwinJumpAttack::OnRep_ShouldTwinHaveJumpObjectType() {
}

void UTwinJumpAttack::Multicast_SetIsForbiddenLandingLocation_Implementation(bool isForbiddenLocation) {
}

void UTwinJumpAttack::Multicast_DestroyTwinOnWrongLanding_Implementation() {
}

void UTwinJumpAttack::Multicast_AttachToSurvivor_Implementation(ADBDPlayer* survivorToAttachTo) {
}






void UTwinJumpAttack::Client_Debug_PrintFinalDecisionOnScreen_Implementation(bool foundPath) {
}

void UTwinJumpAttack::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTwinJumpAttack, _shouldTwinHaveJumpObjectType);
}

UTwinJumpAttack::UTwinJumpAttack() {
    this->_jumpAngleCurve = NULL;
    this->_shouldTwinHaveJumpObjectType = false;
}

