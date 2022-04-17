#include "DecalSpawnerCollection.h"

class UMaterialInterface;
class UDBDDecalComponent;
class UObject;
class UDecalSpawner;

UDBDDecalComponent* UDecalSpawnerCollection::SpawnDecalAtLocation(FName decalSpawnerName, const FVector& decalSize, const FVector& location, const FRotator& rotation, float lifeSpan, FName decalType, const int32 sortOrder) {
    return NULL;
}

void UDecalSpawnerCollection::ReleaseDecalSpawner(FName decalSpawnerName) {
}

UDecalSpawner* UDecalSpawnerCollection::CreateDecalSpawner(const UObject* worldContextObject, FName decalSpawnerName, UMaterialInterface* decalMaterial, int32 poolSize, ESpawnerStrategyType spawnerStrateryType) {
    return NULL;
}

UDecalSpawnerCollection::UDecalSpawnerCollection() {
}

