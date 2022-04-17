#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BloodOrbInfo.h"
#include "MobileBloodOrbRenderer.generated.h"

class UMaterialInstance;
class UInstancedStaticMeshComponent;
class UBloodOrbVisibilityComponent;
class ABloodOrb;
class UMaterialInstanceDynamic;

UCLASS()
class THEONI_API AMobileBloodOrbRenderer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UMaterialInstance* OrbMaterialInstance;
    
    UPROPERTY(EditAnywhere)
    UMaterialInstance* OutlineMaterialInstance;
    
    UPROPERTY(EditAnywhere)
    float CullInterval;
    
private:
    UPROPERTY(Export, Transient)
    UInstancedStaticMeshComponent* _ismComponent;
    
    UPROPERTY(Export, Transient)
    UInstancedStaticMeshComponent* _outlineIsmComponent;
    
    UPROPERTY(Transient)
    TMap<ABloodOrb*, FBloodOrbInfo> _instanceMap;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* _outlineMaterialInstanceDynamic;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* _orbMaterialInstanceDynamic;
    
    UPROPERTY(Export, Transient)
    UBloodOrbVisibilityComponent* _bloodOrbVisibilityComponent;
    
public:
    AMobileBloodOrbRenderer();
};

