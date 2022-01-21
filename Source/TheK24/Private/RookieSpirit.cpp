#include "RookieSpirit.h"
#include "Net/UnrealNetwork.h"

class AGenerator;
class ADBDPlayer;

void URookieSpirit::OnRep_NumberOfGreatSkillChecksOnGeneratorRepair() {
}

void URookieSpirit::HandleGeneratorIsDamagedChanged(AGenerator* generator, ADBDPlayer* player) {
}

void URookieSpirit::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URookieSpirit, _numberOfGreatSkillChecksOnGeneratorRepair);
}

URookieSpirit::URookieSpirit() {
    this->_numberOfGreatSkillChecksOnGeneratorRepair = 0;
    this->_numberOfGeneratorRepairGreatSkillChecksRequired[0] = 0;
    this->_numberOfGeneratorRepairGreatSkillChecksRequired[1] = 0;
    this->_numberOfGeneratorRepairGreatSkillChecksRequired[2] = 0;
}

