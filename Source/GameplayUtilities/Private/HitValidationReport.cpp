#include "HitValidationReport.h"

FHitValidationReport::FHitValidationReport() {
    this->ValidationTimestamp = 0.00f;
    this->InstigatorOwningCharacter = NULL;
    this->MaximumDistance = 0.00f;
    this->CapsuleInflation = 0.00f;
    this->IsValidHit = false;
    this->IsValidDistance = false;
    this->IsValidNotStunned = false;
    this->SquareDistance = 0.00f;
    this->HasPerformCollisionCheck = false;
    this->IsValidCollision = false;
}

