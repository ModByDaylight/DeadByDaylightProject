#include "ReleaseConjoinedTwin.h"
#include "Net/UnrealNetwork.h"

class AConjoinedTwin;
class ADBDPlayer;

void UReleaseConjoinedTwin::OnTwinSet(AConjoinedTwin* twin) {
}

void UReleaseConjoinedTwin::OnRep_ReleaseAnimationWentToTheEnd() {
}

void UReleaseConjoinedTwin::OnPowerCollected(ADBDPlayer* collector) {
}

void UReleaseConjoinedTwin::OnKillerStunned(const FGameplayTag gameEventType, const FGameEventData& gameEventData) {
}





void UReleaseConjoinedTwin::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UReleaseConjoinedTwin, _releaseAnimationWentToTheEnd);
}

UReleaseConjoinedTwin::UReleaseConjoinedTwin() {
    this->_releaseAnimationWentToTheEnd = false;
}

