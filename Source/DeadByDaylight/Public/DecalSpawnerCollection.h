#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESpawnerStrategyType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DecalSpawnerCollection.generated.h"

class UDecalSpawner;
class UMaterialInterface;
class UDBDDecalComponent;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDecalSpawnerCollection : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<FName, UDecalSpawner*> _decalSpawners;
    
public:
    UFUNCTION(BlueprintCallable)
    UDBDDecalComponent* SpawnDecalAtLocation(FName decalSpawnerName, const FVector& decalSize, const FVector& location, const FRotator& rotation, float lifeSpan, FName decalType);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseDecalSpawner(FName decalSpawnerName);
    
    UFUNCTION(BlueprintCallable)
    UDecalSpawner* CreateDecalSpawner(const UObject* worldContextObject, FName decalSpawnerName, UMaterialInterface* decalMaterial, int32 poolSize, ESpawnerStrategyType spawnerStrateryType);
    
    UDecalSpawnerCollection();
};

