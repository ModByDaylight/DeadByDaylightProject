#include "ActorKnowledgeCollection.h"
#include "Net/UnrealNetwork.h"

class AActor;
class ACharacter;

void UActorKnowledgeCollection::Local_SetAvailable(bool value) {
}

bool UActorKnowledgeCollection::IsAvailable(const ACharacter* character) const {
    return false;
}

bool UActorKnowledgeCollection::Contains(AActor* actor) const {
    return false;
}

void UActorKnowledgeCollection::Authority_SetSharingType(EKnowledgeSharingType value) {
}

void UActorKnowledgeCollection::Authority_SetPossessor(ACharacter* possessor) {
}

void UActorKnowledgeCollection::Authority_SetAvailable(bool value) {
}

void UActorKnowledgeCollection::Authority_Remove(AActor* actor) {
}

void UActorKnowledgeCollection::Authority_Empty() {
}

void UActorKnowledgeCollection::Authority_Append(const TArray<AActor*>& actors) {
}

bool UActorKnowledgeCollection::Authority_Add(AActor* actor) {
    return false;
}

void UActorKnowledgeCollection::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UActorKnowledgeCollection, _actors);
    DOREPLIFETIME(UActorKnowledgeCollection, _available);
    DOREPLIFETIME(UActorKnowledgeCollection, _possessor);
    DOREPLIFETIME(UActorKnowledgeCollection, _sharing);
}

UActorKnowledgeCollection::UActorKnowledgeCollection() {
    this->_available = false;
    this->_possessor = NULL;
    this->_sharing = EKnowledgeSharingType::Possessor;
}

