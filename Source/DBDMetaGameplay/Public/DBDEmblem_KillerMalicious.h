#pragma once
#include "CoreMinimal.h"
#include "DBDEmblem.h"
#include "DBDEmblem_KillerMalicious.generated.h"

class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UDBDEmblem_KillerMalicious : public UDBDEmblem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<ACamperPlayer*, int32> _remainingSurvivorHookStates;
    
public:
    UDBDEmblem_KillerMalicious();
    UFUNCTION()
    void OnLevelReadyToPlay();
    
};

