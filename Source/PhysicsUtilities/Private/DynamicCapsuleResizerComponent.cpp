#include "DynamicCapsuleResizerComponent.h"
#include "Net/UnrealNetwork.h"

class UPrimitiveComponent;
class AActor;

void UDynamicCapsuleResizerComponent::SetShrinkingEnabled(bool enabled) {
}

void UDynamicCapsuleResizerComponent::OnRep_IsShrinkingAlwaysEnabled() {
}

void UDynamicCapsuleResizerComponent::OnHit(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, FVector normalImpulse, const FHitResult& hit) {
}

void UDynamicCapsuleResizerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDynamicCapsuleResizerComponent, _isShrinkingAlwaysEnabled);
}

UDynamicCapsuleResizerComponent::UDynamicCapsuleResizerComponent() {
    this->_capsule = NULL;
    this->_shrinkPercent = 0.80f;
    this->_shrinkDuration = 5.00f;
    this->_expandDuration = 1.00f;
    this->_stayShrunkenDuration = 0.50f;
    this->_expandOverlapTestMinDeltaTime = 0.10f;
    this->_isShrinkingEnabled = false;
    this->_isShrinkingAlwaysEnabled = false;
}

