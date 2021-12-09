#include "AuthoritativeActorPoolComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;

void UAuthoritativeActorPoolComponent::OnRep_Pool(TArray<AActor*> previousPool) {
}

void UAuthoritativeActorPoolComponent::Authority_OnActorDestroyed(AActor* destroyedActor) {
}

void UAuthoritativeActorPoolComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAuthoritativeActorPoolComponent, _pool);
}

UAuthoritativeActorPoolComponent::UAuthoritativeActorPoolComponent() {
    this->_actorClass = NULL;
    this->_size = 1;
}

