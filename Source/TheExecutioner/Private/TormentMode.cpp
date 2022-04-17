#include "TormentMode.h"
#include "ChargeableComponent.h"
#include "PowerChargeComponent.h"
#include "PowerToggleComponent.h"
#include "PowerChargePresentationItemProgressComponent.h"
#include "AuthoritativeActorPoolComponent.h"
#include "TormentTrailSpawnerComponent.h"
#include "TormentTrailPointCollectionComponent.h"

void ATormentMode::Server_RequestMoreActorInAttackPool_Implementation() {
}
bool ATormentMode::Server_RequestMoreActorInAttackPool_Validate() {
    return true;
}



void ATormentMode::OnTormentModeChargeEmpty() {
}

bool ATormentMode::IsInTormentMode() const {
    return false;
}

ATormentMode::ATormentMode() {
    this->_activateTormentModeCharge = CreateDefaultSubobject<UChargeableComponent>(TEXT("ActivateTormentModeCharge"));
    this->_tormentModeCharge = CreateDefaultSubobject<UPowerChargeComponent>(TEXT("TormentModeCharge"));
    this->_tormentModeChargePresentation = CreateDefaultSubobject<UPowerChargePresentationItemProgressComponent>(TEXT("PowerChargePresentationProgressComponent"));
    this->_powerToggleComponent = CreateDefaultSubobject<UPowerToggleComponent>(TEXT("PowerToggleComponent"));
    this->_tormentTrailSpawnerComponent = CreateDefaultSubobject<UTormentTrailSpawnerComponent>(TEXT("TormentTrailSpawnerComponent"));
    this->_tormentTrailPointCollectionComponent = CreateDefaultSubobject<UTormentTrailPointCollectionComponent>(TEXT("TormentTrailPointCollectionComponent"));
    this->_restrictedTormentTrailPointCollectionComponent = CreateDefaultSubobject<UTormentTrailPointCollectionComponent>(TEXT("RestrictedTormentTrailPointCollectionComponent"));
    this->_tormentTrailControllerPool = CreateDefaultSubobject<UAuthoritativeActorPoolComponent>(TEXT("TormentTrailControllerPool"));
    this->_tormentAttackTrailControllerPool = CreateDefaultSubobject<UAuthoritativeActorPoolComponent>(TEXT("TormentAttackTrailControllerPool"));
    this->_restrictedTormentTrailControllerPool = CreateDefaultSubobject<UAuthoritativeActorPoolComponent>(TEXT("TormentRestrictedTrailControllerPool"));
    this->_tormentTrailPointPool = CreateDefaultSubobject<UAuthoritativeActorPoolComponent>(TEXT("TormentTrailPointPool"));
    this->_restrictedTormentTrailPointPool = CreateDefaultSubobject<UAuthoritativeActorPoolComponent>(TEXT("RestrictedTormentTrailPointPool"));
    this->_agonyComponentClass = NULL;
    this->_killerTormentTrailDetectorClass = NULL;
    this->_survivorTormentTrailDetectorClass = NULL;
    this->_tormentModeCooldownInteraction = NULL;
    this->_tormentModeChargeSpeedCurve = NULL;
    this->_mobileTormentTrailRendererClass = NULL;
}

