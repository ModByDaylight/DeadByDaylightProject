#include "Searchable.h"
#include "Net/UnrealNetwork.h"
#include "SearchableSpawnPoint.h"

class UPrimitiveComponent;
class ADBDPlayer;
class ACollectable;

void ASearchable::SetHasBeenSearched(bool newHasBeenSearched) {
}

bool ASearchable::HasBeenSearched() const {
    return false;
}

UPrimitiveComponent* ASearchable::GetInteractorPrimitiveComponent_Implementation() const {
    return NULL;
}

bool ASearchable::ContainsSpawnedItem() const {
    return false;
}

ACollectable* ASearchable::Authority_SpawnObject(ADBDPlayer* player) {
    return NULL;
}

void ASearchable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASearchable, _itemInsideSearchable);
}

ASearchable::ASearchable() {
    this->Weight = 1.00f;
    this->ItemRarity = EItemRarity::Common;
    this->_searchableSpawnPoint = CreateDefaultSubobject<USearchableSpawnPoint>(TEXT("SearchableSpawnPoint"));
    this->_hasBeenSearched = false;
    this->_itemInsideSearchable = NULL;
}

