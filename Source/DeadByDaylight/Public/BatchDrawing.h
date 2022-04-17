#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PerMeshInstancingData.h"
#include "BatchDrawing.generated.h"

class UMaterialPerThemeSettings;
class AActor;
class UHISMMaterialHelperSettings;
class UStaticMesh;

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

