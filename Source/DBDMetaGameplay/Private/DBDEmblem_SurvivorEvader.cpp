#include "DBDEmblem_SurvivorEvader.h"

class ADBDPlayer;

void UDBDEmblem_SurvivorEvader::OnChaseStartEvent(ADBDPlayer* chasedPlayer) {
}

UDBDEmblem_SurvivorEvader::UDBDEmblem_SurvivorEvader() {
    this->_killerDistanceStealthPointCurve = NULL;
    this->_killerDistanceStealthPointCurveChasing = NULL;
    this->_chaseDurationPointCurve = NULL;
    this->_ZAxisDistanceScalingCurve = NULL;
    this->_rankTunablesClass = NULL;
}

