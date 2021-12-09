#pragma once
#include "CoreMinimal.h"
#include "GamePresetData.h"
#include "GamePersistentData.generated.h"

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FGamePersistentData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 PlayerCount;
    
    UPROPERTY()
    int32 SpectatorCount;
    
    UPROPERTY()
    FGamePresetData GamePresetData;
    
    FGamePersistentData();
};

