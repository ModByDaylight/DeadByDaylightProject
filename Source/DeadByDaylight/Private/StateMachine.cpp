#include "StateMachine.h"
#include "Net/UnrealNetwork.h"

void UStateMachine::Server_SetStateStack_Implementation(const TArray<uint16>& netStateIDStack) {
}
bool UStateMachine::Server_SetStateStack_Validate(const TArray<uint16>& netStateIDStack) {
    return true;
}

void UStateMachine::NetIDStackChanged() {
}

void UStateMachine::Multicast_SetStateStack_Implementation(const TArray<uint16>& netStateIDStack) {
}
bool UStateMachine::Multicast_SetStateStack_Validate(const TArray<uint16>& netStateIDStack) {
    return true;
}

void UStateMachine::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UStateMachine, _netStateIDStackInitial);
}

UStateMachine::UStateMachine() {
    this->_enableJoinInProgress = true;
}

