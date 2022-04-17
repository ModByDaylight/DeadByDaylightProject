#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MaterialOriginalState.h"
#include "UObject/NoExportTypes.h"
#include "ClipManager.generated.h"

class UMaterialInterface;
class UMeshComponent;
class UDBDClipRegionComponent;
class UDataTable;

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
    AClipManager();
    UFUNCTION(BlueprintCallable)
    void SphericalDissolveAt(FVector Location, float radius);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDissolveMaterials();
    
};

