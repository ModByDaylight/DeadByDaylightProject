#include "KillerProjectile.h"
#include "HitValidatorComponent.h"
#include "HitValidatorConfigurator.h"

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
    this->_hitValidatorConfigurator = CreateDefaultSubobject<UHitValidatorConfigurator>(TEXT("Hit Validator Configurator"));
    this->_hitValidatorComponent = CreateDefaultSubobject<UHitValidatorComponent>(TEXT("Hit Validator"));
    this->_hitValidationConfigName = EHitValidatorConfigName::Default;
}

