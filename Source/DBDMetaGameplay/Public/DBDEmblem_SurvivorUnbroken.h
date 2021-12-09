#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DBDEmblem.h"
#include "DBDEmblem_SurvivorUnbroken.generated.h"

class UDBDRankDesignTunables;
class UCurveFloat;

UCLASS()
class UDBDEmblem_SurvivorUnbroken : public UDBDEmblem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UCurveFloat* _pointsForTimeAlive;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UDBDRankDesignTunables> _rankTunablesClass;
    
    UFUNCTION()
    void OnIntroCompleted();
    
public:
    UDBDEmblem_SurvivorUnbroken();
};

