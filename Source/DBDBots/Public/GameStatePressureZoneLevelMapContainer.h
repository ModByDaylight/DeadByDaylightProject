#pragma once
#include "CoreMinimal.h"
#include "EAIPressureZoneLevel.h"
#include "EAIGameState.h"
#include "GameStatePressureZoneLevelMapContainer.generated.h"

USTRUCT(BlueprintType)
struct FGameStatePressureZoneLevelMapContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TMap<EAIGameState, EAIPressureZoneLevel> Map;
    
    DBDBOTS_API FGameStatePressureZoneLevelMapContainer();
};

