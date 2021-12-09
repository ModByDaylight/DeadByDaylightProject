#pragma once
#include "CoreMinimal.h"
#include "PlayerLevelData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerLevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 LevelValue;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 PrestigeValue;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 MaxXp;
    
    DEADBYDAYLIGHT_API FPlayerLevelData();
};

