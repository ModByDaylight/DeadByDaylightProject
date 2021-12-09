#include "BloodOrbOverlapComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;
class UPrimitiveComponent;

void UBloodOrbOverlapComponent::OnRep_CurrentOverlappingOrbs(int32 previousOverlappingOrbs) {
}

void UBloodOrbOverlapComponent::Authority_OnDestroyedBloodOrb(AActor* destroyedActor) {
}

void UBloodOrbOverlapComponent::Authority_OnBloodOrbVisibilityModeChanged(EBloodOrbVisibilityMode visibilityMode) {
}

void UBloodOrbOverlapComponent::Authority_OnBloodOrbEndOverlap(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex) {
}

void UBloodOrbOverlapComponent::Authority_OnBloodOrbBeginOverlap(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult) {
}

void UBloodOrbOverlapComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBloodOrbOverlapComponent, _currentOverlappingOrbs);
}

UBloodOrbOverlapComponent::UBloodOrbOverlapComponent() {
    this->_currentOverlappingOrbs = 0;
}

