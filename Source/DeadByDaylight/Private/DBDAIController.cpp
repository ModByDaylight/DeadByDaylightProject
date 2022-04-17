#include "DBDAIController.h"

class UObject;

void ADBDAIController::WiggleRequest(const UObject* requester, float input) {
}

void ADBDAIController::UseItemRequest(const UObject* requester) {
}

void ADBDAIController::StruggleRequest(const UObject* requester, float input) {
}

bool ADBDAIController::SetCharacterMovement(ECharacterMovementTypes movementTypes, const UObject* requester) {
    return false;
}

void ADBDAIController::Server_SetAIPlayerRank_Implementation(int32 playerRank) {
}
bool ADBDAIController::Server_SetAIPlayerRank_Validate(int32 playerRank) {
    return true;
}

void ADBDAIController::SecondAttackRequest(const UObject* requester) {
}

void ADBDAIController::SecondaryActionRequest(const UObject* requester) {
}

void ADBDAIController::InteractRequestRelease(const UObject* requester) {
}

void ADBDAIController::InteractRequest(const UObject* requester) {
}

void ADBDAIController::Gesture04Request(const UObject* requester) {
}

void ADBDAIController::Gesture03Request(const UObject* requester) {
}

void ADBDAIController::Gesture02Request(const UObject* requester) {
}

void ADBDAIController::Gesture01Request(const UObject* requester) {
}

void ADBDAIController::FastInteractRequest(const UObject* requester) {
}

void ADBDAIController::EndUseItemRequest(const UObject* requester) {
}

void ADBDAIController::EndSecondAttackRequest(const UObject* requester) {
}

void ADBDAIController::EndInteractRequest(const UObject* requester) {
}

void ADBDAIController::EndFastInteractRequest(const UObject* requester) {
}

void ADBDAIController::EndDropItemRequest(const UObject* requester) {
}

void ADBDAIController::EndActionRequest(const UObject* requester) {
}

void ADBDAIController::DropItemRequest(const UObject* requester) {
}

void ADBDAIController::AttackRequest(const UObject* requester) {
}

void ADBDAIController::ActionRequest(const UObject* requester) {
}

ADBDAIController::ADBDAIController(const FObjectInitializer& Initializer) : Super(Initializer) {
    this->DefaultSightRange = 5000.00f;
    this->CloakedTargetSightRange = 1600.00f;
    this->RotateCameraOnStationaryWaitTime = 0.00f;
    this->RotateCameraOnStationaryDegreePerSecond = 45.00f;
    this->_aiPawn = NULL;
    this->_lastAiPawn = NULL;
    this->_objOverridingDefaultNavigationFilter = NULL;
    this->_originalDefaultNavigationFilter = NULL;
    this->_movementLock = NULL;
}

