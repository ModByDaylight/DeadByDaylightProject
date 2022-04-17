#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DBDEmblem.h"
#include "DBDEmblem_SurvivorEvader.generated.h"

class UCurveFloat;
class UDBDRankDesignTunables;
class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UDBDEmblem_SurvivorEvader : public UDBDEmblem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UCurveFloat* _killerDistanceStealthPointCurve;
    
    UPROPERTY(Transient)
    UCurveFloat* _killerDistanceStealthPointCurveChasing;
    
    UPROPERTY(Transient)
    UCurveFloat* _chaseDurationPointCurve;
    
    UPROPERTY(Transient)
    UCurveFloat* _ZAxisDistanceScalingCurve;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDBDRankDesignTunables> _rankTunablesClass;
    
public:
    UDBDEmblem_SurvivorEvader();
    UFUNCTION()
    void OnChaseStartEvent(ADBDPlayer* chasedPlayer);
    
};

