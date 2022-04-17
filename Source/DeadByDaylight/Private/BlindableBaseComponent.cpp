#include "BlindableBaseComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;
class UChargeableComponent;
class UBlindingEffectorInterface;
class IBlindingEffectorInterface;

void UBlindableBaseComponent::SetChargeable(UChargeableComponent* value) {
}

void UBlindableBaseComponent::OnRep_IsBlinded() {
}

void UBlindableBaseComponent::OnChargeableCompletionPercentChanged(UChargeableComponent* chargeableComponent, float totalPercentComplete) {
}

bool UBlindableBaseComponent::IsBlinded() const {
    return false;
}

void UBlindableBaseComponent::Authority_RemoveBlindingEffector(TScriptInterface<IBlindingEffectorInterface> effector) {
}

void UBlindableBaseComponent::Authority_Blinded(EBlindType blindType, float blindnessDuration, AActor* effectorActor) {
}

void UBlindableBaseComponent::Authority_AddBlindingEffector(TScriptInterface<IBlindingEffectorInterface> effector) {
}

void UBlindableBaseComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBlindableBaseComponent, _isBlinded);
    DOREPLIFETIME(UBlindableBaseComponent, _isBeingBlinded);
}

UBlindableBaseComponent::UBlindableBaseComponent() {
    this->_isBlinded = false;
    this->_chargeableComponent = NULL;
}

