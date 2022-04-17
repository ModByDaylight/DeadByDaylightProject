#include "AuthoritativeMovementComponent.h"
#include "Net/UnrealNetwork.h"

class UPrimitiveComponent;
class UCapsuleComponent;
class AActor;

void UAuthoritativeMovementComponent::SetPawnDetector(UCapsuleComponent* pawnDetector) {
}

void UAuthoritativeMovementComponent::OnRep_AuthoritativeIgnoreOverlapCharacters() {
}

void UAuthoritativeMovementComponent::OnPawnDetectorOverlapExit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UAuthoritativeMovementComponent::OnPawnDetectorOverlapEnter(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UAuthoritativeMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAuthoritativeMovementComponent, _authoritativeIgnoreOverlapCharacters);
}

UAuthoritativeMovementComponent::UAuthoritativeMovementComponent() {
    this->_pawnDetector = NULL;
}

