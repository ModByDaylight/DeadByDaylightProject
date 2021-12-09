#include "NetworkFenceActor.h"

void ANetworkFenceActor::Server_ClientPassedFence_Implementation(const TArray<FGuid>& Fences) {
}
bool ANetworkFenceActor::Server_ClientPassedFence_Validate(const TArray<FGuid>& Fences) {
    return true;
}

void ANetworkFenceActor::Client_AllPassedFence_Implementation(const TArray<FGuid>& Fences) {
}
bool ANetworkFenceActor::Client_AllPassedFence_Validate(const TArray<FGuid>& Fences) {
    return true;
}

ANetworkFenceActor::ANetworkFenceActor() {
}

