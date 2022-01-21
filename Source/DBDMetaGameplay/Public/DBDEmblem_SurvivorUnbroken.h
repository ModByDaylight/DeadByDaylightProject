#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DBDEmblem.h"
#include "DBDEmblem_SurvivorUnbroken.generated.h"

class UCurveFloat;
class UDBDRankDesignTunables;

UCLASS(meta=(BlueprintSpawnableComponent))
class UDBDEmblem_SurvivorUnbroken : public UDBDEmblem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UCurveFloat* _pointsForTimeAlive;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDBDRankDesignTunables> _rankTunablesClass;
    
public:
    UDBDEmblem_SurvivorUnbroken();
private:
    UFUNCTION()
    void OnIntroCompleted();
    
};

