#include "ItemAddon.h"
#include "Net/UnrealNetwork.h"

class ACollectable;
class ADBDPlayer;


void UItemAddon::OnRep_AddonInitializationData() {
}


void UItemAddon::Multicast_SetBaseItem_Implementation(ACollectable* baseItem) {
}
bool UItemAddon::Multicast_SetBaseItem_Validate(ACollectable* baseItem) {
    return true;
}

void UItemAddon::Multicast_AddAddonToItem_Implementation(ACollectable* item) {
}

bool UItemAddon::IsSecondaryAction() const {
    return false;
}

bool UItemAddon::IsReadyForSetUp_Implementation() const {
    return false;
}


void UItemAddon::Authority_OnCollectablePickedUp_Implementation(ADBDPlayer* player) {
}


void UItemAddon::Authority_ApplyMetaModifiers() {
}

void UItemAddon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UItemAddon, _addonInitializationData);
}

UItemAddon::UItemAddon() {
    this->BaseItemType = NULL;
    this->_needsSetup = false;
}

