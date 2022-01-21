#pragma once
#include "CoreMinimal.h"
#include "DBDEmblem.h"
#include "DBDEmblem_KillerDevout.generated.h"

class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UDBDEmblem_KillerDevout : public UDBDEmblem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<ACamperPlayer*> _playersToHook;
    
public:
    UDBDEmblem_KillerDevout();
private:
    UFUNCTION()
    void OnLevelReadyToPlay();
    
};

