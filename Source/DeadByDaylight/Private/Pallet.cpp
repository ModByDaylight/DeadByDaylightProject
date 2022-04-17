#include "Pallet.h"
#include "DBDNavEvadeLoopComponent.h"
#include "PalletPulldownBlockerComponent.h"

class USkeletalMeshComponent;
class ADBDPlayer;
class UPrimitiveComponent;
class AActor;
class ACamperPlayer;

void APallet::UpdateIllusionaryPallet() {
}

void APallet::SetPalletState(EPalletState state) {
}

void APallet::SetIllusionaryPallet(USkeletalMeshComponent* pallet) {
}



void APallet::PullDown(ADBDPlayer* player, const FPalletPushSettings& pushSettings, const EPalletStunZoneSideStrategy stunZoneSideStrategy) {
}

void APallet::OnStunOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult) {
}






void APallet::Multicast_StunPlayer_Implementation(AActor* actor, ACamperPlayer* survivor, bool stunBreakPallet) {
}

void APallet::Multicast_ResetPallet_Implementation() {
}

void APallet::Multicast_PulldownPallet_Implementation() {
}

bool APallet::IsPulldownBlockedByEntity() const {
    return false;
}

ADBDPlayer* APallet::GetPlayerDoingPulldown() const {
    return NULL;
}

bool APallet::GetIsPulledDown() const {
    return false;
}

bool APallet::GetIsDreamPallet() const {
    return false;
}

float APallet::GetFallDuration() const {
    return 0.0f;
}

void APallet::GetDestructibleAreaPrimitiveComponents_Implementation(TArray<UPrimitiveComponent*>& prims) const {
}



bool APallet::CanPulldown(const ADBDPlayer* player, const FVector& interactionAxis, const bool isStationary) const {
    return false;
}

void APallet::Authority_StunSlashersinStunZone(AActor* actor) {
}

void APallet::Authority_OnOverlapPushBox(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult) {
}

APallet::APallet() {
    this->PalletDownEvadeDoorFrontPointOffset = 150.00f;
    this->_state = EPalletState::Up;
    this->_isIllusionaryPalletDown = false;
    this->_illusionaryPallet = NULL;
    this->_destroyLeft = NULL;
    this->_destroyRight = NULL;
    this->_pushBox = NULL;
    this->_maxDotproductThresholdForPulldownAccross = 0.25f;
    this->_fallDuration = 0.30f;
    this->_stunBoxLeft = NULL;
    this->_stunBoxRight = NULL;
    this->_playerExecutingPulldown = NULL;
    this->_navEvadeLoopComponent = CreateDefaultSubobject<UDBDNavEvadeLoopComponent>(TEXT("NavEvadeLoopComponent"));
    this->_palletPulldownBlockerComponent = CreateDefaultSubobject<UPalletPulldownBlockerComponent>(TEXT("PalletPulldownBlockerComponent"));
    this->_isDreamPallet = false;
}

