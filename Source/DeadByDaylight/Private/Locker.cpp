#include "Locker.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "AnimationMontageSlave.h"
#include "MontagePlayer.h"

class ACamperPlayer;
class AActor;
class UInteractionDefinition;
class ADBDPlayer;
class UPrimitiveComponent;
class UInteractor;


void ALocker::SpawnKillerReloadActor(TSubclassOf<AActor> actorClass) {
}

void ALocker::SetupKillerSpecificInteraction(UInteractionDefinition* interaction) {
}

void ALocker::SetSurvivorInLocker(ACamperPlayer* survivorInLocker) {
}

void ALocker::SetPlayerOpeningLocker(ADBDPlayer* player) {
}

void ALocker::OnSurvivorHealthChanged(ECamperDamageState before, ECamperDamageState after) {
}

void ALocker::OnSurvivorEndPlay(AActor* actor, TEnumAsByte<EEndPlayReason::Type> endPlayReason) {
}

void ALocker::OnRep_PreventAllInteractions() {
}

void ALocker::Multicast_EjectSurvivor_Implementation() {
}
bool ALocker::Multicast_EjectSurvivor_Validate() {
    return true;
}

bool ALocker::IsOccupied() const {
    return false;
}

bool ALocker::IsFacingLocker(const ADBDPlayer* player, float toleranceDegreeAngle) const {
    return false;
}

ACamperPlayer* ALocker::GetSurvivorInLocker() const {
    return NULL;
}

UPrimitiveComponent* ALocker::GetStunZone_Implementation() const {
    return NULL;
}

AActor* ALocker::GetKillerInteractionActor() const {
    return NULL;
}

UInteractor* ALocker::GetInteractor() const {
    return NULL;
}


void ALocker::Authority_ReportOpenLockerNoiseEventToAI(const bool fastActivation) {
}

void ALocker::Authority_EnableOtherInteractors(const UInteractor* usableInteractor, bool usable) {
}

bool ALocker::AreInteractionsAllowed() const {
    return false;
}

void ALocker::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALocker, _preventAllInteractions);
}

ALocker::ALocker() {
    this->FastDoorActivationAudibleRange = 1600.00f;
    this->NormalDoorActivationAudibleRange = 800.00f;
    this->_montageFollower = CreateDefaultSubobject<UAnimationMontageSlave>(TEXT("MontageSlave"));
    this->_montagePlayer = CreateDefaultSubobject<UMontagePlayer>(TEXT("AnimMontagePlayer"));
    this->_playerOpeningLocker = NULL;
    this->_survivorInLocker = NULL;
    this->_mainInteractor = NULL;
    this->_frontInteractionZone = NULL;
    this->_searchEmpty = NULL;
    this->_searchPlayer = NULL;
    this->_killerInteractionActor = NULL;
    this->_lockerAnimInstance = NULL;
    this->_preventAllInteractions = false;
    this->_preventAllInteractionsLocally = false;
}

