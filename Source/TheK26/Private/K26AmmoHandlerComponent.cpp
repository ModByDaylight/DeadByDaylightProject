#include "K26AmmoHandlerComponent.h"
#include "Net/UnrealNetwork.h"

class UK26PathHandlerComponent;
class UK26PowerStatusHandlerComponent;
class ASlasherPlayer;
class UAuthoritativeActorPoolComponent;
class AActor;

void UK26AmmoHandlerComponent::SetDependencies(UK26PathHandlerComponent* pathHandler, UK26PowerStatusHandlerComponent* statusHandler, UAuthoritativeActorPoolComponent* authoritativeActorPoolComponent) {
}

void UK26AmmoHandlerComponent::SendHasExpiredDelegate() {
}

void UK26AmmoHandlerComponent::OnLevelReadyToPlay() {
}

void UK26AmmoHandlerComponent::OnKillerSet(ASlasherPlayer* killer) {
}

void UK26AmmoHandlerComponent::Multicast_StartRecharging_Implementation(const EK26AmmoCooldownReason lastCooldownReason) {
}

void UK26AmmoHandlerComponent::Multicast_StartExpiring_Implementation() {
}

void UK26AmmoHandlerComponent::Multicast_OnCurrentAmmoStateChanged_Implementation(const EK26AmmoState newState, const int32 currentAmmo, const int32 maxAmmo) {
}

void UK26AmmoHandlerComponent::Multicast_OnAmmoHasBeenFired_Implementation() {
}

void UK26AmmoHandlerComponent::Multicast_OnAmmoExpired_Implementation() {
}

int32 UK26AmmoHandlerComponent::GetMaxAmmo() const {
    return 0;
}

EK26AmmoCooldownReason UK26AmmoHandlerComponent::GetCurrentCooldownReason() const {
    return EK26AmmoCooldownReason::Expired;
}

EK26AmmoState UK26AmmoHandlerComponent::GetCurrentAmmoState() const {
    return EK26AmmoState::Available;
}

int32 UK26AmmoHandlerComponent::GetCurrentAmmo() const {
    return 0;
}




void UK26AmmoHandlerComponent::CallOnMaxAmmoSet(UK26AmmoHandlerComponent::FOnMaxAmmoSetDelegate callback) {
}

void UK26AmmoHandlerComponent::Authority_OnAmmoInit(AActor* initAmmo) {
}

void UK26AmmoHandlerComponent::Authority_InitializePoolComponent(const int32 maxAmmo) {
}

void UK26AmmoHandlerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UK26AmmoHandlerComponent, _isAmmoOnCooldown);
    DOREPLIFETIME(UK26AmmoHandlerComponent, _currentAmmo);
    DOREPLIFETIME(UK26AmmoHandlerComponent, _lastCooldownReason);
    DOREPLIFETIME(UK26AmmoHandlerComponent, _currentAmmoState);
    DOREPLIFETIME(UK26AmmoHandlerComponent, _isOutOfAmmo);
}

UK26AmmoHandlerComponent::UK26AmmoHandlerComponent() {
    this->_rechargeEndTime = 0.00f;
    this->_isTunableInit = false;
    this->_projectileClass = NULL;
    this->_currentAmmo = -1;
    this->_lastCooldownReason = EK26AmmoCooldownReason::Expired;
    this->_currentAmmoState = EK26AmmoState::Available;
    this->_pathHandler = NULL;
    this->_statusHandler = NULL;
    this->_authoritativeActorPoolComponent = NULL;
    this->_fallbackFireCooldown = 20.00f;
}

