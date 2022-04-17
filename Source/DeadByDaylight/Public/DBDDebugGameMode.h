#pragma once
#include "CoreMinimal.h"
#include "DBDGameMode.h"
#include "CamperLoadout.h"
#include "SlasherLoadout.h"
#include "DBDDebugGameMode.generated.h"

class ADBDPlayerController;
class ADBDPlayer;

UCLASS(NonTransient)
class DEADBYDAYLIGHT_API ADBDDebugGameMode : public ADBDGameMode {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<ADBDPlayerController*, int32> LoadoutIndex;
    
    UPROPERTY()
    TSet<ADBDPlayer*> PlayersWithItems;
    
    UPROPERTY(EditAnywhere)
    TArray<FCamperLoadout> CamperPawnOverrides;
    
    UPROPERTY(EditAnywhere)
    TArray<FSlasherLoadout> SlasherPawnOverrides;
    
public:
    ADBDDebugGameMode();
};

