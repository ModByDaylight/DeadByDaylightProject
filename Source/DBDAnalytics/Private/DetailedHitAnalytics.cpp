#include "DetailedHitAnalytics.h"

FDetailedHitAnalytics::FDetailedHitAnalytics() {
    this->Ping = 0.00f;
    this->HitTimestamp = 0.00f;
    this->IsValidHit = false;
    this->IsValidDistance = false;
    this->IsValidCollision = false;
    this->RecorderCacheTimespan = 0.00f;
    this->MaximumDistance = 0.00f;
    this->CapsuleInflation = 0.00f;
    this->InstigatorCoordinateX = 0.00f;
    this->InstigatorCoordinateY = 0.00f;
    this->InstigatorCoordinateZ = 0.00f;
    this->InstigatorRotationX = 0.00f;
    this->InstigatorRotationY = 0.00f;
    this->InstigatorRotationZ = 0.00f;
    this->TargetLocationInstigatorTimestamp = 0.00f;
    this->TargetCoordinateX = 0.00f;
    this->TargetCoordinateY = 0.00f;
    this->TargetCoordinateZ = 0.00f;
    this->Distance = 0.00f;
}

