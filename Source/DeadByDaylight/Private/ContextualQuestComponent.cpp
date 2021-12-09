#include "ContextualQuestComponent.h"
#include "Net/UnrealNetwork.h"

void UContextualQuestComponent::OnRep_SpecialBehaviourObjectsInfo() {
}

void UContextualQuestComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UContextualQuestComponent, _specialBehaviourObjectsInfo);
}

UContextualQuestComponent::UContextualQuestComponent() {
    this->_isInitialized = false;
}

