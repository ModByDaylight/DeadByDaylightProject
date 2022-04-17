#include "HeadOn.h"

class UPrimitiveComponent;
class AActor;
class UStunnableComponent;
class ADBDPlayer;

void UHeadOn::OnPawnOverlapExit(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex) {
}

void UHeadOn::OnPawnOverlapEnter(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult) {
}

void UHeadOn::OnHeadOnAnimationComplete() {
}

void UHeadOn::Multicast_StunPlayer_Implementation(UStunnableComponent* stunnableComponent, ADBDPlayer* stunner) {
}

bool UHeadOn::CanApplyHeadOnInteraction() const {
    return false;
}

void UHeadOn::Authority_ActivatePerk() {
}

UHeadOn::UHeadOn() {
    this->IsPerformingHeadOn = false;
    this->ExhaustOnlyOnSuccessfulStun = false;
    this->StunKillersEnteringStunZone = false;
    this->_hideDuration[0] = 0.00f;
    this->_hideDuration[1] = 0.00f;
    this->_hideDuration[2] = 0.00f;
    this->_locker = NULL;
}

