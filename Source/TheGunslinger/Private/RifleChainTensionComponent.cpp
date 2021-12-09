#include "RifleChainTensionComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;

void URifleChainTensionComponent::OnTensionChargeableCompletionChanged(bool completed, const TArray<AActor*>& instigatorsForCompletion) {
}

void URifleChainTensionComponent::OnRep_IsBuildingTension() {
}

bool URifleChainTensionComponent::IsBuildingTension() const {
    return false;
}

float URifleChainTensionComponent::GetProgress() const {
    return 0.0f;
}

void URifleChainTensionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URifleChainTensionComponent, _isBuildingTension);
    DOREPLIFETIME(URifleChainTensionComponent, _progressModifierForSurvivors);
}

URifleChainTensionComponent::URifleChainTensionComponent() {
    this->_isBuildingTension = false;
    this->_targetlinkable = NULL;
    this->_progressModifierForSurvivors = EProgressModifier::Default;
    this->_chain = NULL;
}

