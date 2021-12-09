#include "BaseModifierContainer.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class UEventDrivenModifierCondition;

void UBaseModifierContainer::OnRep_EventDrivenConditionData_Internal(const FModifierReplicatedEventConditionData& oldReplicatedCondition) {
}

bool UBaseModifierContainer::IsApplicable() const {
    return false;
}

UEventDrivenModifierCondition* UBaseModifierContainer::CreateAndSetEventDrivenCondition(TSubclassOf<UEventDrivenModifierCondition> conditionType) {
    return NULL;
}


void UBaseModifierContainer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBaseModifierContainer, _id);
    DOREPLIFETIME(UBaseModifierContainer, _eventDrivenConditionData);
}

UBaseModifierContainer::UBaseModifierContainer() {
}

