#include "CamperInteractable.h"
#include "Components/SceneComponent.h"
#include "ActivatorComponent.h"
#include "ChargeableComponent.h"
#include "Components/BoxComponent.h"
#include "Interactor.h"

class UInteractionDefinition;
class ACamperPlayer;

void ACamperInteractable::UpdateTargetHPSlot() {
}

void ACamperInteractable::SetKillInteraction(UInteractionDefinition* killInteraction) {
}

void ACamperInteractable::ServerMoveOut_Implementation() {
}
bool ACamperInteractable::ServerMoveOut_Validate() {
    return true;
}


ACamperPlayer* ACamperInteractable::GetOwningSurvivor() const {
    return NULL;
}

ACamperInteractable::ACamperInteractable() {
    this->_killCharge = CreateDefaultSubobject<UChargeableComponent>(TEXT("KillCharge"));
    this->_snapOutOfItCharge = CreateDefaultSubobject<UChargeableComponent>(TEXT("SnapOutOfItCharge"));
    this->_wakeUpCharge = CreateDefaultSubobject<UChargeableComponent>(TEXT("WakeUpCharge"));
    this->_crowDismissCharge = CreateDefaultSubobject<UChargeableComponent>(TEXT("CrowDismissCharge"));
    this->_activator = CreateDefaultSubobject<UActivatorComponent>(TEXT("Activator"));
    this->_killInteractor = NULL;
    this->_killInteractionZone = NULL;
    this->_killHealthyInteractionZone = NULL;
    this->_mainInteractionZone = CreateDefaultSubobject<UBoxComponent>(TEXT("MainInteractionZone"));
    this->_healingInteractor1 = CreateDefaultSubobject<UInteractor>(TEXT("HealingInteractor1"));
    this->_selfInteractionsInteractor = CreateDefaultSubobject<UInteractor>(TEXT("SelfInteractionsInteractor"));
    this->_rootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

