#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DBDEmblem.h"
#include "DBDEmblem_KillerChaser.generated.h"

class ACamperPlayer;
class UCurveFloat;
class UDBDRankDesignTunables;
class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UDBDEmblem_KillerChaser : public UDBDEmblem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UCurveFloat* _chasePointsByDurationCurve;
    
    UPROPERTY(Transient)
    TMap<ACamperPlayer*, float> _hookedPlayersPenaltyDelay;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDBDRankDesignTunables> _rankTunablesClass;
    
public:
    UDBDEmblem_KillerChaser();
    UFUNCTION()
    void OnChaseStart(ADBDPlayer* chasedPlayer);
    
};

