#pragma once
#include "CoreMinimal.h"
#include "DBDEmblem.h"
#include "DBDEmblem_KillerMalicious.generated.h"

class ACamperPlayer;

UCLASS()
class UDBDEmblem_KillerMalicious : public UDBDEmblem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<ACamperPlayer*, int32> _remainingSurvivorHookStates;
    
public:
    UFUNCTION()
    void OnLevelReadyToPlay();
    
    UDBDEmblem_KillerMalicious();
};

