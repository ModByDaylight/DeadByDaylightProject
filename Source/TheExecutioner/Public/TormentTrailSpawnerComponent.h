#pragma once
#include "CoreMinimal.h"
#include "ETrailType.h"
#include "Components/ActorComponent.h"
#include "Engine/NetSerialization.h"
#include "DBDTunableRowHandle.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TormentTrailSpawnerComponent.generated.h"

class UAuthoritativeActorPoolComponent;
class ATormentTrailController;
class AActor;
class UTormentTrailPointCollectionComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class THEEXECUTIONER_API UTormentTrailSpawnerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ATormentTrailController* _currentTrailController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDBDTunableRowHandle _restrictionRangeToHooks;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _restrictionRangeToGenerators;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _restrictionRangeToExitSwitch;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _maxSlopeAngleForTrail;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _minSlopeAngleForTrail;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _restrictionRangeToHatch;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _restrictionMaxVerticalDistance;
    
    UPROPERTY(Export, Transient)
    UTormentTrailPointCollectionComponent* _tormentTrailPointCollectionComponent;
    
    UPROPERTY(Export, Transient)
    UTormentTrailPointCollectionComponent* _restrictedTormentTrailPointCollectionComponent;
    
    UPROPERTY(Export, Transient)
    UAuthoritativeActorPoolComponent* _tormentTrailControllerPool;
    
    UPROPERTY(Export, Transient)
    UAuthoritativeActorPoolComponent* _tormentRestrictedTrailControllerPool;
    
    UPROPERTY()
    TArray<AActor*> _actorsInRange;
    
    UPROPERTY(EditDefaultsOnly)
    FVector _slopeDetectionOverGroundVector;
    
    UPROPERTY(EditDefaultsOnly)
    FVector _slopeDetectionEndVector;
    
    UPROPERTY(EditDefaultsOnly)
    float _forwardMultiplierSlopeDetection;
    
    UPROPERTY(EditDefaultsOnly)
    float _epsilonToAddToSpawnLocationInZ;
    
public:
    UTormentTrailSpawnerComponent();
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Sever_SpawnTrailController(ATormentTrailController* trailController, const FVector_NetQuantize10 location, const FRotator rotation);
    
    UFUNCTION(Reliable, Server)
    void Server_StopTrailController(ATormentTrailController* trailController);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_RequestMoreActorInPool(const ETrailType trailType);
    
    UFUNCTION()
    void OnLevelReadyToPlay();
    
    UFUNCTION()
    void OnInRangeChanged(const bool inRange, const AActor* actor);
    
};

