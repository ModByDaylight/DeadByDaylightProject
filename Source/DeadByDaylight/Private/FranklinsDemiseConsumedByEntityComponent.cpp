#include "FranklinsDemiseConsumedByEntityComponent.h"
#include "Net/UnrealNetwork.h"

class ADBDPlayer;

void UFranklinsDemiseConsumedByEntityComponent::OnRep_ConsumeTimer() {
}


void UFranklinsDemiseConsumedByEntityComponent::Authority_StartConsume(float duration, ADBDPlayer* previousOwner, ADBDPlayer* slasher) {
}

void UFranklinsDemiseConsumedByEntityComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFranklinsDemiseConsumedByEntityComponent, _consumeTimer);
}

UFranklinsDemiseConsumedByEntityComponent::UFranklinsDemiseConsumedByEntityComponent() {
    this->_consumeTimer = NULL;
    this->_camperStatus = NULL;
    this->_previousOwner = NULL;
    this->_originatingPerkOwner = NULL;
    this->_itemChargerComponent = NULL;
}

