#pragma once
#include "CoreMinimal.h"
#include "LegacySavedBloodwebNode.h"
#include "LegacySavedBloodWebRingPersistentData.generated.h"

USTRUCT(BlueprintType)
struct FLegacySavedBloodWebRingPersistentData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TArray<FLegacySavedBloodwebNode> NodeData;
    
    DEADBYDAYLIGHT_API FLegacySavedBloodWebRingPersistentData();
};

