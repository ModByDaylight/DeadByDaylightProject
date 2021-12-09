#pragma once
#include "CoreMinimal.h"
#include "LevelReadyToPlayRequirements.generated.h"

class ADBDPlayer;

USTRUCT(BlueprintType)
struct FLevelReadyToPlayRequirements {
    GENERATED_BODY()
public:
    UPROPERTY()
    ADBDPlayer* player;
    
    UPROPERTY()
    uint8 perkCount;
    
    UPROPERTY()
    uint8 itemCount;
    
    UPROPERTY()
    uint8 addonCount;
    
    DEADBYDAYLIGHT_API FLevelReadyToPlayRequirements();
};

