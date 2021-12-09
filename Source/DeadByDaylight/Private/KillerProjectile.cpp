#include "KillerProjectile.h"

class UPrimitiveComponent;
class ASlasherPlayer;

void AKillerProjectile::SetActiveSlashable(bool active) {
}

UPrimitiveComponent* AKillerProjectile::GetPlayerPrimitiveComponent_Implementation() const {
    return NULL;
}

ASlasherPlayer* AKillerProjectile::GetLaunchingKiller() const {
    return NULL;
}

AKillerProjectile::AKillerProjectile() {
    this->_hitValidationConfigName = EHitValidatorConfigName::Default;
}

