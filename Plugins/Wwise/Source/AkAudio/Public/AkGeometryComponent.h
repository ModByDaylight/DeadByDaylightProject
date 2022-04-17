#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AkMeshType.h"
#include "AkGeometrySurfaceOverride.h"
#include "AkGeometryData.h"
#include "AkGeometryComponent.generated.h"

class AActor;
class UMaterialInterface;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkGeometryComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AkMeshType MeshType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<UMaterialInterface*, FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableDiffraction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableDiffractionOnBoundaryEdges: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* AssociatedRoom;
    
private:
    UPROPERTY()
    FAkGeometryData GeometryData;
    
public:
    UAkGeometryComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateGeometry();
    
    UFUNCTION(BlueprintCallable)
    void RemoveGeometry();
    
    UFUNCTION(BlueprintCallable)
    void ConvertMesh();
    
};

