#include "BlightedSerumDashInteraction.h"

class UBlightedSerumCooldownInteraction;
class UBlightedSerumCollisionInteraction;

void UBlightedSerumDashInteraction::SetCooldownInteraction(UBlightedSerumCooldownInteraction* cooldownInteraction) {
}

void UBlightedSerumDashInteraction::SetCollisionInteraction(UBlightedSerumCollisionInteraction* collisionInteraction) {
}

UBlightedSerumDashInteraction::UBlightedSerumDashInteraction() {
    this->_cooldownInteraction = NULL;
    this->_collisionInteraction = NULL;
    this->_dashSpeedCurve = NULL;
    this->_lookAngleToTurnRateCurveController = NULL;
    this->_lookAngleToTurnRateCurveMouse = NULL;
    this->_dashDuration = 0.00f;
    this->_vectorInterpToSpeed = 0.00f;
    this->_wallDashAccelerationMultiplier = 0.00f;
    this->_cameraPitchRecenterTime = 0.00f;
    this->_lookAngleTurnRateModifier = 1.00f;
    this->_wallDashCollisionRadius = 0.00f;
    this->_wallDashCollisionHeight = 0.00f;
    this->_wallDashCollisionRange = 0.00f;
}

