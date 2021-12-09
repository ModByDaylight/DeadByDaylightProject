#include "ItemModifier.h"
#include "Net/UnrealNetwork.h"

class ACollectable;

void UItemModifier::OnRep_ModifierData() {
}

void UItemModifier::HandleIncreaseMaxCharge() {
}

void UItemModifier::HandleIncreaseItemCount() {
}

void UItemModifier::HandleIncreaseCharge() {
}

float UItemModifier::GetItemMaxEnergy() const {
    return 0.0f;
}

float UItemModifier::GetItemEnergy() const {
    return 0.0f;
}

int32 UItemModifier::GetItemCount() const {
    return 0;
}

ACollectable* UItemModifier::GetBaseItem() const {
    return NULL;
}

void UItemModifier::AuthoritySetItemMaxEnergy(float energy) {
}

void UItemModifier::AuthoritySetItemEnergy(float energy) {
}

void UItemModifier::AuthoritySetItemCount(int32 itemCount) {
}

void UItemModifier::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UItemModifier, ModifierData);
}

UItemModifier::UItemModifier() {
}

