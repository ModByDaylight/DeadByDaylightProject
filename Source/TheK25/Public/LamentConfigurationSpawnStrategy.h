#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ETileSpawnPointType.h"
#include "LamentConfigurationSpawnInfo.h"
#include "LamentConfigurationSpawnStrategy.generated.h"

class AHatch;

UCLASS(meta=(BlueprintSpawnableComponent))
class ULamentConfigurationSpawnStrategy : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float _killerPointDistanceMultiplier;
    
    UPROPERTY(EditAnywhere)
    float _survivorPointDistanceMultiplier;
    
    UPROPERTY(EditAnywhere)
    float _maxDistancePointAllowed;
    
    UPROPERTY(EditAnywhere)
    float _minSurvivorDistance;
    
    UPROPERTY(EditAnywhere)
    float _minSurvivorDistancePointPenalty;
    
    UPROPERTY(EditAnywhere)
    float _minKillerDistance;
    
    UPROPERTY(EditAnywhere)
    float _minHatchDistance;
    
    UPROPERTY(EditAnywhere)
    float _minKillerDistancePointPenalty;
    
    UPROPERTY(EditAnywhere)
    float _pointPenaltyPerUsedLocationTime;
    
    UPROPERTY(EditAnywhere)
    TArray<ETileSpawnPointType> _spawnPointsTypes;
    
    UPROPERTY(EditDefaultsOnly)
    float _downRaycastLength;
    
    UPROPERTY(EditAnywhere)
    float _rayCastZOffet;
    
private:
    UPROPERTY(Transient)
    TArray<FLamentConfigurationSpawnInfo> _cached_spawnsInfo;
    
    UPROPERTY(Transient)
    TArray<AHatch*> _hatches;
    
public:
    ULamentConfigurationSpawnStrategy();
};

