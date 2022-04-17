#include "K22Power.h"
#include "Net/UnrealNetwork.h"
#include "ChargeableComponent.h"
#include "PowerChargeComponent.h"
#include "K22PowerChargePresentationItemProgressComponent.h"

class AConjoinedTwin;

void AK22Power::OnRep_ConjoinedTwin() {
}

void AK22Power::OnPowerChargeEmpty() {
}

void AK22Power::OnFirstAttachmentToSister() {
}

AConjoinedTwin* AK22Power::GetConjoinedTwin() const {
    return NULL;
}

void AK22Power::Authority_OnPossessTwinChargePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete) {
}

void AK22Power::Authority_OnDestroyTwinChargePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete) {
}

void AK22Power::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AK22Power, _conjoinedTwin);
}

AK22Power::AK22Power() {
    this->_releaseConjoinedTwinChargeable = CreateDefaultSubobject<UChargeableComponent>(TEXT("ReleaseConjoinedTwinChargeable"));
    this->_possessConjoinedTwinChargeable = CreateDefaultSubobject<UChargeableComponent>(TEXT("PossessConjoinedTwinChargeable"));
    this->_conjoinedTwin = NULL;
    this->_conjoinedTwinParadise = NULL;
    this->_powerCharge = CreateDefaultSubobject<UPowerChargeComponent>(TEXT("PowerChargeComponent"));
    this->_powerChargePresentationItemProgress = CreateDefaultSubobject<UK22PowerChargePresentationItemProgressComponent>(TEXT("K22PowerChargePresentationItemProgressComponent"));
    this->_conjoinedTwinClass = NULL;
}

