#include "K24Power.h"
#include "Net/UnrealNetwork.h"
#include "ChargeableComponent.h"

class APallet;
class ABreakableBase;
class AZombieCharacter;





void AK24Power::Server_PowerDestroyPallet_Implementation(APallet* pallet) {
}

void AK24Power::Server_PowerDestroyBreakable_Implementation(ABreakableBase* breakable) {
}

void AK24Power::Server_KillAZombie_Implementation(AZombieCharacter* zombie, EAttackType attackType) {
}



void AK24Power::OnRep_PowerLevelPoints() {
}




void AK24Power::Multicast_PowerDestroyPallet_Implementation(APallet* pallet) {
}

void AK24Power::Multicast_PowerDestroyBreakable_Implementation(ABreakableBase* breakable) {
}

bool AK24Power::IsInPower() const {
    return false;
}

float AK24Power::GetWhipLength() const {
    return 0.0f;
}

int32 AK24Power::GetPowerLevel() const {
    return 0;
}

void AK24Power::Authority_OnSurvivorContaminated(const EContaminator contaminator) {
}

void AK24Power::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AK24Power, _powerLevelPoints);
}

AK24Power::AK24Power() {
    this->_activateK24PowerCharge = CreateDefaultSubobject<UChargeableComponent>(TEXT("ActivateK24PowerCharge"));
    this->_activatePowerChargeSpeedCurve = NULL;
    this->_activatePowerChargeLvl3SpeedCurve = NULL;
    this->_k24PowerCooldownInteraction = NULL;
    this->_contaminationComponentBP = NULL;
    this->_powerLevelPoints = 0.00f;
}

