#include "DBDCharacterMovementComponent.h"

class UAnimMontage;
class UCurveFloat;

void UDBDCharacterMovementComponent::SetRandomInputAmplitude(float value) {
}

void UDBDCharacterMovementComponent::Server_StopMontage_Implementation(float timestamp, const FMontageStopDefinition montageStopDefinition) {
}
bool UDBDCharacterMovementComponent::Server_StopMontage_Validate(float timestamp, const FMontageStopDefinition montageStopDefinition) {
    return true;
}

void UDBDCharacterMovementComponent::Server_StartSnapping_Implementation(float timestamp, const FSnappingData data) {
}
bool UDBDCharacterMovementComponent::Server_StartSnapping_Validate(float timestamp, const FSnappingData data) {
    return true;
}

void UDBDCharacterMovementComponent::Server_SetStopSnapping_Implementation(float timestamp, const bool snapToFinalDestination) {
}
bool UDBDCharacterMovementComponent::Server_SetStopSnapping_Validate(float timestamp, const bool snapToFinalDestination) {
    return true;
}

void UDBDCharacterMovementComponent::Server_SetMaxSpeedMultiplierScalar_Implementation(float timestamp, float value) {
}
bool UDBDCharacterMovementComponent::Server_SetMaxSpeedMultiplierScalar_Validate(float timestamp, float value) {
    return true;
}

void UDBDCharacterMovementComponent::Server_SetMaxAcceleration_Implementation(float timestamp, float value) {
}
bool UDBDCharacterMovementComponent::Server_SetMaxAcceleration_Validate(float timestamp, float value) {
    return true;
}

void UDBDCharacterMovementComponent::Server_SetGroundFriction_Implementation(float timestamp, float value) {
}
bool UDBDCharacterMovementComponent::Server_SetGroundFriction_Validate(float timestamp, float value) {
    return true;
}

void UDBDCharacterMovementComponent::Server_SetAdditiveMaxSpeedScalar_Implementation(float timestamp, float value) {
}
bool UDBDCharacterMovementComponent::Server_SetAdditiveMaxSpeedScalar_Validate(float timestamp, float value) {
    return true;
}

void UDBDCharacterMovementComponent::Server_ReplicateControlRotation_Implementation(uint8 clientRoll, uint32 view) {
}
bool UDBDCharacterMovementComponent::Server_ReplicateControlRotation_Validate(uint8 clientRoll, uint32 view) {
    return true;
}

void UDBDCharacterMovementComponent::Server_RemoveMaxSpeedMovementCurve_Implementation(float timestamp, const uint32 curveNetId, const EMovementCurveType movementCurveType) {
}
bool UDBDCharacterMovementComponent::Server_RemoveMaxSpeedMovementCurve_Validate(float timestamp, const uint32 curveNetId, const EMovementCurveType movementCurveType) {
    return true;
}

void UDBDCharacterMovementComponent::Server_PlayMontage_Implementation(float timestamp, const FMontagePlaybackDefinition montagePlaybackDefinition) {
}
bool UDBDCharacterMovementComponent::Server_PlayMontage_Validate(float timestamp, const FMontagePlaybackDefinition montagePlaybackDefinition) {
    return true;
}

void UDBDCharacterMovementComponent::Server_Launch_Implementation(float timestamp, FVector launchVelocity) {
}
bool UDBDCharacterMovementComponent::Server_Launch_Validate(float timestamp, FVector launchVelocity) {
    return true;
}

void UDBDCharacterMovementComponent::Server_AddMaxSpeedMovementCurve_Implementation(float timestamp, const uint32 curveNetId, float duration, const EMovementCurveType movementCurveType) {
}
bool UDBDCharacterMovementComponent::Server_AddMaxSpeedMovementCurve_Validate(float timestamp, const uint32 curveNetId, float duration, const EMovementCurveType movementCurveType) {
    return true;
}

void UDBDCharacterMovementComponent::OnPreMontageStop(const FMontageStopDefinition montageDefinition, const UAnimMontage* montage) {
}

void UDBDCharacterMovementComponent::OnMontageStarted(const FMontagePlaybackDefinition& montageDefinition, const UAnimMontage* montage) {
}

void UDBDCharacterMovementComponent::Local_AddMaxSpeedMultiplierCurve(const UCurveFloat* curve, float duration, bool autoRemove) {
}

bool UDBDCharacterMovementComponent::IsSnappingRotation() const {
    return false;
}

bool UDBDCharacterMovementComponent::IsSnappingPosition() const {
    return false;
}

bool UDBDCharacterMovementComponent::IsSnapping() const {
    return false;
}

bool UDBDCharacterMovementComponent::IsApplyingRandomInput() const {
    return false;
}

FVector UDBDCharacterMovementComponent::GetCurrentSnapPosition() const {
    return FVector{};
}

void UDBDCharacterMovementComponent::Client_TeleportTo_Implementation(FVector_NetQuantize100 location, FYawAndPitchRotator_NetQuantize32 rotation) {
}

void UDBDCharacterMovementComponent::Client_Stop_Implementation() {
}

void UDBDCharacterMovementComponent::Client_PreventMovement_Implementation(const bool value) {
}

UDBDCharacterMovementComponent::UDBDCharacterMovementComponent() {
    this->ProjectedWallSlidingFactor = 1.00f;
    this->RandomInputFrontMultiplier = 0.80f;
    this->RandomInputSideMultiplier = 1.00f;
    this->RandomInputBackMultiplier = 0.20f;
    this->_forceUseDropStaggerFix = false;
    this->_velocityAdditiveStrategy = NULL;
    this->_inputAccelerationConstraintStrategy = NULL;
    this->_rotationStrategy = NULL;
    this->_lookAtTarget = NULL;
}

