#include "K22Power.h"
#include "Net/UnrealNetwork.h"

class UChargeableComponent;
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
    this->_conjoinedTwin = NULL;
    this->_conjoinedTwinParadise = NULL;
    this->_conjoinedTwinClass = NULL;
}

