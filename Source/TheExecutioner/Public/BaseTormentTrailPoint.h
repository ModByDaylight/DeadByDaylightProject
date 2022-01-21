#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TunableStat.h"
#include "BaseTormentTrailPoint.generated.h"

class USphereComponent;
class UStaticMesh;
class USplineMeshComponent;

UCLASS()
class ABaseTormentTrailPoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export)
    USphereComponent* _collisionComponent;
    
    UPROPERTY(EditDefaultsOnly)
    float _collisionRadius;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _tormentTrailAliveTime;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    USplineMeshComponent* _splineMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UStaticMesh*> _trailMeshList;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    uint8 _indexInTrail;
    
public:
    ABaseTormentTrailPoint();
protected:
    UFUNCTION(BlueprintCallable)
    void EndOfDisapearCosmetic();
    
    UFUNCTION(BlueprintImplementableEvent)
    void DisappearCosmetic();
    
};

