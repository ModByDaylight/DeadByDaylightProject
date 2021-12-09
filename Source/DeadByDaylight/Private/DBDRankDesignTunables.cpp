#include "DBDRankDesignTunables.h"

UDBDRankDesignTunables::UDBDRankDesignTunables() {
    this->UnbrokenTimeAlivePointsCurve = NULL;
    this->EvaderStealthPointsByDistanceWhileKillerNotChasingCurve = NULL;
    this->EvaderStealthPointsByDistanceWhileKillerIsChasingCurve = NULL;
    this->EvaderChasePointsByDurationCurve = NULL;
    this->EvaderZAxisDistanceScalingCurve = NULL;
    this->ChaserChasePointsByDurationCurve = NULL;
}

