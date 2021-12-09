#pragma once
#include "CoreMinimal.h"
#include "LegacyCharacterSavedInventoryData.generated.h"

USTRUCT(BlueprintType)
struct FLegacyCharacterSavedInventoryData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    uint32 Version;
    
    UPROPERTY(SaveGame)
    FName Name;
    
    UPROPERTY(SaveGame)
    int64 TimeObtainedSinceEpoch;
    
    DEADBYDAYLIGHT_API FLegacyCharacterSavedInventoryData();
};

