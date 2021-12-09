#include "HealSurvivorSubAnimInstance.h"

class ADBDPlayer;

void UHealSurvivorSubAnimInstance::ResetHealerSkillCheckFailed() {
}

void UHealSurvivorSubAnimInstance::OnHealerSkillCheckResponseAesthetic(bool success, ADBDPlayer* healer) {
}

UHealSurvivorSubAnimInstance::UHealSurvivorSubAnimInstance() {
    this->_isHealingACrawlingTarget = false;
    this->_isHealingOtherNoMedkit = false;
    this->_isHealingOtherMedkit = false;
    this->_isHealingSelfNoMedkit = false;
    this->_isHealingSelfMedkit = false;
    this->_isWakingUpOther = false;
    this->_isBeingHealed = false;
    this->_isBeingMended = false;
    this->_isMendingOther = false;
    this->_hasSkillCheckFailed = false;
    this->_isCrawling = false;
    this->_hasHealerSkillCheckFailed = false;
}

