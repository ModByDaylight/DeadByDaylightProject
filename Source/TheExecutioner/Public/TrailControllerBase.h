#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DBDTunableRowHandle.h"
#include "ETrailType.h"
#include "TrailControllerBase.generated.h"

class ABaseTormentTrailPoint;
class UTormentTrailPointCollectionComponent;
class USplineComponent;
class UAuthoritativePoolableActorComponent;

UCLASS(Abstract)
class ATrailControllerBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    UTormentTrailPointCollectionComponent* _tormentTrailPointCollection;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _distanceBetweenTormentTrailPoint;
    
    UPROPERTY(BlueprintReadOnly, Export)
    USplineComponent* _splineComponent;
    
private:
    UPROPERTY(Export, Transient)
    UAuthoritativePoolableActorComponent* _poolableComponent;
    
    UPROPERTY(EditDefaultsOnly)
    ETrailType _trailType;
    
public:
    ATrailControllerBase();
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveTormentTrailController();
    
    UFUNCTION()
    void OnTrailPointDeath(ABaseTormentTrailPoint* baseTrailPoint);
    
    UFUNCTION()
    void OnAcquireChanged(const bool acquired);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void ActivateCosmetic(const bool value);
    
};

