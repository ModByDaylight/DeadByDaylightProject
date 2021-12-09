#pragma once
#include "CoreMinimal.h"
#include "MaterialOriginalState.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "ClipManager.generated.h"

class UMaterialInterface;
class UDataTable;
class UMeshComponent;
class UDBDClipRegionComponent;

UCLASS()
class DEADBYDAYLIGHT_API AClipManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    TArray<UDBDClipRegionComponent*> _clippingZones;
    
    UPROPERTY(Export, Transient)
    TSet<UMeshComponent*> _meshComponents;
    
    UPROPERTY(Transient)
    TArray<FMaterialOriginalState> _dissolvedMeshes;
    
    UPROPERTY(Transient)
    TMap<UMaterialInterface*, UMaterialInterface*> _normal2dissolve;
    
    UPROPERTY(Transient)
    TMap<UMaterialInterface*, UMaterialInterface*> _dissolve2normal;
    
    UPROPERTY(Transient)
    UDataTable* _sphericalDissolveMaterials;
    
public:
    UFUNCTION(BlueprintCallable)
    void SphericalDissolveAt(FVector Location, float radius);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDissolveMaterials();
    
    AClipManager();
};

