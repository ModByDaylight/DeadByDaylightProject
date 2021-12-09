#include "WakerObject.h"
#include "Net/UnrealNetwork.h"

class UCamperDreamworldComponent;
class ADBDPlayer;
class UPrimitiveComponent;


void AWakerObject::SetChargeComplete(bool complete) {
}

void AWakerObject::OnRep_LinkedCamperChanged(UCamperDreamworldComponent* previous) {
}


void AWakerObject::OnLinkedCamperDreamStateChanged(bool isInDreamworld, bool locallyObservedChanged) {
}

void AWakerObject::OnAnyCamperDreamStateChanged(bool isInDreamworld, bool locallyObservedChanged) {
}

void AWakerObject::LinkCampersOnLevelReadyToPlay() {
}

bool AWakerObject::IsLinkedToCamper(const ADBDPlayer* camper) const {
    return false;
}

bool AWakerObject::HasLinkedCamper() const {
    return false;
}

bool AWakerObject::GetIsInteracting() const {
    return false;
}

UPrimitiveComponent* AWakerObject::GetInteractorPrimitiveComponent_Implementation() const {
    return NULL;
}

float AWakerObject::GetInteractionPercentComplete_Implementation() const {
    return 0.0f;
}

bool AWakerObject::GetChargeComplete() const {
    return false;
}

bool AWakerObject::CanWakeUpCamper(const ADBDPlayer* camper) const {
    return false;
}

void AWakerObject::BindToCamperDreamStateChanged(ADBDPlayer* player) {
}

void AWakerObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWakerObject, _linkedCamperDreamworldComponent);
}

AWakerObject::AWakerObject() {
    this->_linkedCamperDreamworldComponent = NULL;
    this->IsInteracting = false;
    this->_chargeComplete = false;
}

