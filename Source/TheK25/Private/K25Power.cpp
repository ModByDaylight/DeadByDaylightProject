#include "K25Power.h"
#include "Net/UnrealNetwork.h"

class ACamperPlayer;
class ASlasherPlayer;

void AK25Power::OnSurvivorAdded(ACamperPlayer* survivor, ASlasherPlayer* killer) {
}

void AK25Power::OnRep_LamentConfiguration() {
}

void AK25Power::OnRep_K25Gateway() {
}

void AK25Power::OnRep_K25ControlledProjectile() {
}

void AK25Power::OnKillerAdded(ASlasherPlayer* killer) {
}

void AK25Power::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AK25Power, _gateway);
    DOREPLIFETIME(AK25Power, _controlledProjectileInstance);
    DOREPLIFETIME(AK25Power, _lamentConfiguration);
    DOREPLIFETIME(AK25Power, _isPowerCharged);
}

AK25Power::AK25Power() {
    this->_survivorChainAttachmentComponentClass = NULL;
    this->_survivorChainTargetterComponentClass = NULL;
    this->_k25GatewayClass = NULL;
    this->_controlledProjectileClass = NULL;
    this->_lamentConfigurationClass = NULL;
    this->_k25HuskClass = NULL;
    this->_killerTeleportFinderComponentClass = NULL;
    this->_chainAnimationActorClass = NULL;
    this->_pillarAnimationActorClass = NULL;
    this->_k25ProjectileProvider = NULL;
    this->_gateway = NULL;
    this->_controlledProjectileInstance = NULL;
    this->_lamentConfiguration = NULL;
    this->_k25Husk = NULL;
    this->_isPowerCharged = false;
}

