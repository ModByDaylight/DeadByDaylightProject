#include "NatAudioCustomMesh.h"

class UPrimitiveComponent;
class AActor;

void UNatAudioCustomMesh::OnEndOverlapAudioMesh(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex) {
}

void UNatAudioCustomMesh::OnBeginOverlapAudioMesh(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult) {
}

UNatAudioCustomMesh::UNatAudioCustomMesh() {
    this->_onBeginOverlapAudioEvent = NULL;
    this->_onEndOverlapAudioEvent = NULL;
}

