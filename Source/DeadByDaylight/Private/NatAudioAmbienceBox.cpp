#include "NatAudioAmbienceBox.h"

class UPrimitiveComponent;
class AActor;

void UNatAudioAmbienceBox::OnEndOverlapAudioAmbience(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex) {
}

void UNatAudioAmbienceBox::OnBeginOverlapAudioAmbience(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult) {
}

UNatAudioAmbienceBox::UNatAudioAmbienceBox() {
    this->_onBeginOverlapAudioEvent = NULL;
    this->_onEndOverlapAudioEvent = NULL;
}

