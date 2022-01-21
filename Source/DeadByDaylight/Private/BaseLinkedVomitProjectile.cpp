#include "BaseLinkedVomitProjectile.h"
#include "PoolableProjectileComponent.h"

class ACamperPlayer;
class AInteractable;
class USceneComponent;

void ABaseLinkedVomitProjectile::OnAffectSurvivor_Implementation(ACamperPlayer* camperPlayer) {
}

void ABaseLinkedVomitProjectile::OnAffectInteractable_Implementation(AInteractable* interactable, USceneComponent* hitComponent) {
}

void ABaseLinkedVomitProjectile::NativeExplode(const FImpactInfo& impactInfo) {
}

ABaseLinkedVomitProjectile::ABaseLinkedVomitProjectile() {
    this->_useSplashDamage = false;
    this->_passThroughSurvivors = false;
    this->_poolableProjectile = CreateDefaultSubobject<UPoolableProjectileComponent>(TEXT("Poolable Projectile Component"));
    this->_vomitTrail = NULL;
    this->_splineMesh = NULL;
    this->_splashDamageSphere = NULL;
    this->_akAudioVomitProjectile = NULL;
    this->_vomitSplashCamper = NULL;
    this->_vomitSplash = NULL;
    this->_akAudioEventAudioEventVomitSplash = NULL;
    this->_isSuperVomit = false;
}

