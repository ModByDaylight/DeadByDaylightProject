#include "LightBurnable.h"
#include "Net/UnrealNetwork.h"

class AActor;
class UFlashlightComponent;

void ULightBurnable::OnRep_IsBurning() {
}

void ULightBurnable::OnChargeableCompleteEvent(bool completed, const TArray<AActor*>& instigatorsForCompletion) {
}

void ULightBurnable::OnBurnChargeEmpty() {
}

void ULightBurnable::Authority_OnFlashlightAddedRemoved(const UFlashlightComponent* flashlight) {
}

void ULightBurnable::Authority_OnFirecrackerInRangeBegin(const FFirecrackerEffectData& effectData) {
}

void ULightBurnable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ULightBurnable, _isBurning);
}

ULightBurnable::ULightBurnable() {
    this->_chargeable = NULL;
    this->_flashlightable = NULL;
    this->_firecrackerEffectHandler = NULL;
    this->_isBurning = false;
}

