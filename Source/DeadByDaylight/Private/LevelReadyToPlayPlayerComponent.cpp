#include "LevelReadyToPlayPlayerComponent.h"
#include "Net/UnrealNetwork.h"

void ULevelReadyToPlayPlayerComponent::Server_SetIsReadyToPlay_Implementation(bool readyToPlay) {
}
bool ULevelReadyToPlayPlayerComponent::Server_SetIsReadyToPlay_Validate(bool readyToPlay) {
    return true;
}

void ULevelReadyToPlayPlayerComponent::OnRep_LevelReadyToPlayRequirementsTarget() {
}

void ULevelReadyToPlayPlayerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ULevelReadyToPlayPlayerComponent, _levelReadyToPlayRequirementsTarget);
}

ULevelReadyToPlayPlayerComponent::ULevelReadyToPlayPlayerComponent() {
}

