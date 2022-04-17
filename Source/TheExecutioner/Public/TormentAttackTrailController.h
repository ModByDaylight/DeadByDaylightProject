#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TrailControllerBase.h"
#include "SpawnedAttackPoint.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "Engine/NetSerialization.h"
#include "UObject/NoExportTypes.h"
#include "TormentAttackTrailController.generated.h"

class ATormentAttackTrailPoint;
class AActor;
class AMobileTormentTrailRenderer;

UCLASS()
class ATormentAttackTrailController : public ATrailControllerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATormentAttackTrailPoint> _tormentTrailAttackPointClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> _tormentTrailAttackSign;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _trailSpawnDelay;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _timeIntervalBetweenPointsSpawn;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _attackTrailLenght;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _consideredAsSlopeAngle;
    
    UPROPERTY(Transient)
    TArray<FTransform> _pointsTransform;
    
    UPROPERTY(EditDefaultsOnly)
    FVector _slopeDetectionOverGroundVector;
    
    UPROPERTY(EditDefaultsOnly)
    FVector _groundDetectionEndVector;
    
    UPROPERTY(EditDefaultsOnly)
    FVector _slopeCompensationVector;
    
    UPROPERTY(Transient)
    TArray<FSpawnedAttackPoint> _spawnedAttackPointList;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    bool _trailSpawnStarted;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float _soundDistanceOnTrail;
    
    UPROPERTY(Transient)
    AMobileTormentTrailRenderer* _mobileTormentTrailRenderer;
    
public:
    ATormentAttackTrailController();
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnTrailPointRemovedCosmetic(int32 index);
    
private:
    UFUNCTION()
    void OnStartTrailTimerDone();
    
    UFUNCTION()
    void OnIntervalBetweenPointsTimerDone();
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnAttackTrailStartCosmetic();
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_StartAttackTrail(const float serverTimeSpawn, const FVector_NetQuantize10 location, const FRotator rotation);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void DisplayAttackTrailSpawnSign();
    
};

