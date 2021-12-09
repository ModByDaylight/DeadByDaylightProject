#include "Solidarity.h"

class ADBDPlayer;
class AActor;

void USolidarity::Authority_OnSkillCheckResponse(bool success, bool bonus, ADBDPlayer* player, bool triggerLoudNoise, bool hadInput, ESkillCheckCustomType type, float chargeChange) {
}

void USolidarity::Authority_OnHealthChargeApplied(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime) {
}

USolidarity::USolidarity() {
    this->_allowMedkit = false;
    this->_healerHPSlot = NULL;
    this->_targetHPSlot = NULL;
    this->_healOtherInteraction = NULL;
}

