#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TormentTrailPointInfo.h"
#include "MobileTormentTrailRenderer.generated.h"

class UInstancedStaticMeshComponent;
class ABaseTormentTrailPoint;
class UMaterialInstanceDynamic;

UCLASS()
class THEEXECUTIONER_API AMobileTormentTrailRenderer : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Export, Transient)
    UInstancedStaticMeshComponent* _pillarIsmComponent;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    UInstancedStaticMeshComponent* _wireIsmComponent;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    UInstancedStaticMeshComponent* _trailIsmComponent;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    UInstancedStaticMeshComponent* _pillarOutlineIsmComponent;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    UInstancedStaticMeshComponent* _wireOutlineIsmComponent;
    
    UPROPERTY(Transient)
    TMap<ABaseTormentTrailPoint*, FTormentTrailPointInfo> _instanceMap;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* _trailMaterialInstanceDynamic;
    
public:
    AMobileTormentTrailRenderer();
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_RemoveInstance(ABaseTormentTrailPoint* trailPoint);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_AddInstance(ABaseTormentTrailPoint* trailPoint, bool isAttackTrailPoint);
    
};

