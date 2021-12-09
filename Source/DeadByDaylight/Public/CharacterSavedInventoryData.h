#pragma once
#include "CoreMinimal.h"
#include "CharacterSavedInventoryData.generated.h"

USTRUCT(BlueprintType)
struct FCharacterSavedInventoryData {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 Version;
    
    UPROPERTY()
    FName Name;
    
    DEADBYDAYLIGHT_API FCharacterSavedInventoryData();
};

