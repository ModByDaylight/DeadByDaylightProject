#include "CompositeModifierCondition.h"
#include "Net/UnrealNetwork.h"

void UCompositeModifierCondition::OnRep_Conditions() {
}

void UCompositeModifierCondition::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCompositeModifierCondition, _conditions);
}

UCompositeModifierCondition::UCompositeModifierCondition() {
}

