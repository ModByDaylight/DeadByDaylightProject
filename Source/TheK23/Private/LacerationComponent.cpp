#include "LacerationComponent.h"
#include "Net/UnrealNetwork.h"

void ULacerationComponent::OnRepLaceration(float oldLaceration) {
}

void ULacerationComponent::Multicast_KnifeHit_Implementation(float newLaceration, bool causedDamage, bool causedKo, const FVector& impactLocation, const FVector& impactNormal) {
}




void ULacerationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ULacerationComponent, _laceration);
}

ULacerationComponent::ULacerationComponent() {
    this->_laceration = 0.00f;
    this->_onHitSpeedBoost = NULL;
}

