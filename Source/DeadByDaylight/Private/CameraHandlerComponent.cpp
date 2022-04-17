#include "CameraHandlerComponent.h"
#include "Net/UnrealNetwork.h"

class USceneComponent;
class UParticleSystemComponent;
class AActor;

void UCameraHandlerComponent::SetSocketID(EDBDCameraSocketID mode) {
}

void UCameraHandlerComponent::SetAttachmentComponent(USceneComponent* attachmentComponent) {
}

void UCameraHandlerComponent::PlayVFXOnCurrentCamera(UParticleSystemComponent* component) {
}

EDBDCameraSocketID UCameraHandlerComponent::GetSocketID() {
    return EDBDCameraSocketID::VE_None;
}

AActor* UCameraHandlerComponent::GetCurrentCamera() {
    return NULL;
}

void UCameraHandlerComponent::AddCameraToSocket(EDBDCameraSocketID mode, AActor* camera) {
}

void UCameraHandlerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCameraHandlerComponent, _delayedSocketID);
}

UCameraHandlerComponent::UCameraHandlerComponent() {
    this->_delayedSocketID = EDBDCameraSocketID::VE_Default;
    this->_currentSocketID = EDBDCameraSocketID::VE_Default;
    this->_manualZoomAllowPerkModifiers = false;
    this->_manualZoomCurveFloat = NULL;
    this->_cameraAttachmentComponent = NULL;
    this->_isFOVSystemActive = true;
}

