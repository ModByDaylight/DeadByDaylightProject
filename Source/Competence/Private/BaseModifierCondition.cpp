#include "BaseModifierCondition.h"
#include "Net/UnrealNetwork.h"

class AActor;

void UBaseModifierCondition::SetSubjectProviderClass(UClass* subjectProviderClass) {
}

void UBaseModifierCondition::OnRep_SubjectProviderClass() {
}

void UBaseModifierCondition::OnRep_OwningModifier() {
}

void UBaseModifierCondition::InitializeSubjectProviderClass_Implementation() {
}

AActor* UBaseModifierCondition::GetOwningActor() const {
    return NULL;
}

void UBaseModifierCondition::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBaseModifierCondition, _owningModifier);
    DOREPLIFETIME(UBaseModifierCondition, _subjectProviderClass);
}

UBaseModifierCondition::UBaseModifierCondition() {
    this->_owningModifier = NULL;
    this->_subjectProvider = NULL;
    this->_subjectProviderClass = NULL;
}

