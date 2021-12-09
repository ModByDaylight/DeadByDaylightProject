#include "ForThePeople.h"

class ACamperPlayer;

void UForThePeople::Server_OnActionInputPressed_Implementation() {
}
bool UForThePeople::Server_OnActionInputPressed_Validate() {
    return true;
}


void UForThePeople::Multicast_OnHealAbilityUsed_Implementation(ACamperPlayer* healingSurvivor, ACamperPlayer* healedSurvivor) {
}

UForThePeople::UForThePeople() {
    this->_brokenEffectDurations[0] = 0.00f;
    this->_brokenEffectDurations[1] = 0.00f;
    this->_brokenEffectDurations[2] = 0.00f;
}

