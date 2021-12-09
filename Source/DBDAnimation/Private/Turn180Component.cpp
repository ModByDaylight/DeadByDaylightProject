#include "Turn180Component.h"
#include "Net/UnrealNetwork.h"

void UTurn180Component::Server_SetSettings_Implementation(float timestamp, const FTurn180Settings settings) {
}
bool UTurn180Component::Server_SetSettings_Validate(float timestamp, const FTurn180Settings settings) {
    return true;
}

void UTurn180Component::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTurn180Component, _settings);
}

UTurn180Component::UTurn180Component() {
}

