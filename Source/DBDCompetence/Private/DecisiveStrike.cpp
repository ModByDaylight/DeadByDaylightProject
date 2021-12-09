#include "DecisiveStrike.h"
#include "Net/UnrealNetwork.h"

class ADBDPlayer;

void UDecisiveStrike::OnUnhookedTimerEnded() {
}

void UDecisiveStrike::OnSkillCheck(bool hadInput, bool success, bool bonus, ESkillCheckCustomType type) {
}

void UDecisiveStrike::OnRep_HasBeenAttempted() {
}

void UDecisiveStrike::OnPickUpEnded(ADBDPlayer* picker) {
}

void UDecisiveStrike::OnOwnerPickedUp(ADBDPlayer* picker) {
}

void UDecisiveStrike::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDecisiveStrike, _hasBeenAttempted);
}

UDecisiveStrike::UDecisiveStrike() {
    this->_timeAfterUnhook[0] = 0.00f;
    this->_timeAfterUnhook[1] = 0.00f;
    this->_timeAfterUnhook[2] = 0.00f;
    this->_skillCheckDelay = 0.70f;
    this->_skillCheckBuffer = 0.00f;
    this->_killerHearsSkillCheckCue = false;
    this->_hasBeenAttempted = false;
}

