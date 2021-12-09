#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PerMeshInstancingData.h"
#include "BatchDrawing.generated.h"

class UHISMMaterialHelperSettings;
class AActor;
class UStaticMesh;
class UMaterialPerThemeSettings;

UCLASS()
class UBatchDrawing : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    AActor* _actorToSpawnInstancesInto;
    
    UPROPERTY(Transient)
    TMap<UStaticMesh*, FPerMeshInstancingData> _meshesToInstancingData;
    
    UPROPERTY(Transient)
    UHISMMaterialHelperSettings* _hismMaterialHelperSettings;
    
    UPROPERTY(Transient)
    UMaterialPerThemeSettings* _materialPerThemeSettings;
    
public:
    UBatchDrawing();
};

