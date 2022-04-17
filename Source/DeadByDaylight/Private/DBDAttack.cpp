#include "DBDAttack.h"

class ADBDPlayer;
class UAttackableComponent;

void UDBDAttack::Server_RequestStateChange_Implementation(const EAttackSubstate state) {
}
bool UDBDAttack::Server_RequestStateChange_Validate(const EAttackSubstate state) {
    return true;
}

void UDBDAttack::Server_HitTarget_Implementation(ADBDPlayer* target, const float targetLocationTimestamp, FActionPredictionKey predictionKey) {
}
bool UDBDAttack::Server_HitTarget_Validate(ADBDPlayer* target, const float targetLocationTimestamp, FActionPredictionKey predictionKey) {
    return true;
}

void UDBDAttack::Server_HitAttackableComponent_Implementation(UAttackableComponent* attackableComponent) {
}
bool UDBDAttack::Server_HitAttackableComponent_Validate(UAttackableComponent* attackableComponent) {
    return true;
}

void UDBDAttack::Server_ClearTargets_Implementation() {
}
bool UDBDAttack::Server_ClearTargets_Validate() {
    return true;
}

void UDBDAttack::Multicast_RequestStateChange_Implementation(const EAttackSubstate state) {
}

void UDBDAttack::Multicast_HitTarget_Implementation(ADBDPlayer* target) {
}

void UDBDAttack::Multicast_HitAttackableComponent_Implementation(UAttackableComponent* attackableComponent) {
}
bool UDBDAttack::Multicast_HitAttackableComponent_Validate(UAttackableComponent* attackableComponent) {
    return true;
}

void UDBDAttack::Multicast_ClearTargets_Implementation() {
}

void UDBDAttack::Client_ReceiveHitResult_Implementation(ADBDPlayer* target, bool isValid, FActionPredictionKey predictionKey) {
}

void UDBDAttack::Client_ReceiveAttackSubstateRequestResult_Implementation(const FAttackSubstateRequestResult result) {
}

UDBDAttack::UDBDAttack() {
    this->_attackType = EAttackType::VE_None;
    this->_useMontage = true;
    this->_damageZone = EDetectionZone::VE_Damage;
    this->_lockZone = EDetectionZone::VE_Pounce;
    this->_obstructionZone = EDetectionZone::VE_Obstructed;
    this->_hitValidationConfigName = EHitValidatorConfigName::Default;
}

