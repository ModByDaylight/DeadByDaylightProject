#include "K25Power.h"
#include "Net/UnrealNetwork.h"
#include "ChargeableComponent.h"
#include "AuthoritativeActorPoolComponent.h"
#include "K25ProjectileLauncher.h"
#include "PowerChargeComponent.h"
#include "K25PowerChargePresentationItemProgressComponent.h"
#include "K25ChainAttachmentReplicationComponent.h"

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
    this->_k25ChainStrikeInteractionChargeableComponent = CreateDefaultSubobject<UChargeableComponent>(TEXT("K25ChainStrikeInteractionChargeableComponent"));
    this->_k25TeleportChargeableComponent = CreateDefaultSubobject<UChargeableComponent>(TEXT("K25TeleportChargeableComponent"));
    this->_survivorChainAttachmentComponentClass = NULL;
    this->_survivorChainTargetterComponentClass = NULL;
    this->_k25GatewayClass = NULL;
    this->_controlledProjectileClass = NULL;
    this->_lamentConfigurationClass = NULL;
    this->_k25HuskClass = NULL;
    this->_killerTeleportFinderComponentClass = NULL;
    this->_chainAnimationActorClass = NULL;
    this->_pillarAnimationActorClass = NULL;
    this->_k25ProjectileLauncher = CreateDefaultSubobject<UK25ProjectileLauncher>(TEXT("K25ProjectileLauncher"));
    this->_k25ProjectilePool = CreateDefaultSubobject<UAuthoritativeActorPoolComponent>(TEXT("K25ProjectilePool"));
    this->_k25ChainPool = CreateDefaultSubobject<UAuthoritativeActorPoolComponent>(TEXT("K25ChainPool"));
    this->_k25PowerChargeComponent = CreateDefaultSubobject<UPowerChargeComponent>(TEXT("K25PowerChargeComponent"));
    this->_k25ProjectileProvider = NULL;
    this->_k25PowerPresentationItemProgressComponent = CreateDefaultSubobject<UK25PowerChargePresentationItemProgressComponent>(TEXT("K25PowerChargePresentationItemProgressComponent"));
    this->_gateway = NULL;
    this->_controlledProjectileInstance = NULL;
    this->_lamentConfiguration = NULL;
    this->_k25Husk = NULL;
    this->_chainAttachmentReplicationComponent = CreateDefaultSubobject<UK25ChainAttachmentReplicationComponent>(TEXT("K25ChainAttachementReplicationComponent"));
    this->_isPowerCharged = false;
}

