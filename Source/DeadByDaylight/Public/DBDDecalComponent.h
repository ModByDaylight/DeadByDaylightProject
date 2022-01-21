#pragma once
#include "CoreMinimal.h"
#include "Components/DecalComponent.h"
#include "DBDDecalComponent.generated.h"

class UStaticMeshComponent;
class UGlassStaticMesh;
class UMaterialInstanceDynamic;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDDecalComponent : public UDecalComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    TArray<UStaticMeshComponent*> staticMeshDecals;
    
    UPROPERTY(Export, Transient)
    TMap<UStaticMeshComponent*, UGlassStaticMesh*> staticMeshGlass;
    
    UPROPERTY(Transient)
    TArray<UMaterialInstanceDynamic*> materialInstances;
    
    UDBDDecalComponent();
};

