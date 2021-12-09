#include "AICamperDodgeTunableRowData.h"

FAICamperDodgeTunableRowData::FAICamperDodgeTunableRowData() {
    this->CharacterId = 0;
    this->BestDodgeType = EAIDodgeType::FORWARD_SIDE_STEP;
    this->RequireInSight = false;
    this->RequireAttackState = false;
    this->Duration = 0.00f;
    this->Range = 0.00f;
    this->AttackPlusSurvivorHalfWidth = 0.00f;
    this->FieldOfView = 0.00f;
}

