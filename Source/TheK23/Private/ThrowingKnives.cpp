#include "ThrowingKnives.h"
#include "Net/UnrealNetwork.h"
#include "PowerChargeComponent.h"
#include "FlurryComboScoreComponent.h"
#include "ReloadKnives.h"
#include "TricksterSuperModeComponent.h"
#include "K23PowerProgressPresentationComponent.h"
#include "LacerationComponent.h"

class ASlasherPlayer;
class UKnivesLauncher;

void AThrowingKnives::OnItemUsedStateChanged(bool pressed) {
}

void AThrowingKnives::Multicast_OnUsePowerWhenOutOfAmmo_Implementation() {
}

void AThrowingKnives::Multicast_OnUsePowerWhenInCooldown_Implementation() {
}

ASlasherPlayer* AThrowingKnives::GetSlasher() const {
    return NULL;
}

UKnivesLauncher* AThrowingKnives::GetLauncher() const {
    return NULL;
}






void AThrowingKnives::Authority_SpawnReloadInteractionOnLockers() {
}

void AThrowingKnives::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AThrowingKnives, _flurryScoreComponent);
    DOREPLIFETIME(AThrowingKnives, _superModeComponent);
}

AThrowingKnives::AThrowingKnives() {
    this->_flurryScoreComponent = CreateDefaultSubobject<UFlurryComboScoreComponent>(TEXT("FlurryComboScoreCombonent"));
    this->_superModeComponent = CreateDefaultSubobject<UTricksterSuperModeComponent>(TEXT("TricksterSuperModeComponent"));
    this->_superModeChargePresentationComponent = CreateDefaultSubobject<UK23PowerProgressPresentationComponent>(TEXT("SuperModeChargePresentationComponent"));
    this->_superModeChargeComponent = CreateDefaultSubobject<UPowerChargeComponent>(TEXT("SuperModeChargeComponent"));
    this->_knivesProvider = NULL;
    this->_knivesLauncher = NULL;
    this->_lacerationComponentClass = ULacerationComponent::StaticClass();
    this->_reloadInteractionClass = UReloadKnives::StaticClass();
    this->_closetReloadActor = NULL;
    this->_minimumTimeBetweenBroadcast = 1.00f;
}

