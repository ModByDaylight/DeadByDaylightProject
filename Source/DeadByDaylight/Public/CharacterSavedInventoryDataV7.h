#pragma once
#include "CoreMinimal.h"
#include "CharacterSavedInventoryDataV7.generated.h"

USTRUCT(BlueprintType)
struct FCharacterSavedInventoryDataV7 {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Id;
    
    UPROPERTY()
    int32 Num;
    
    UPROPERTY(SaveGame)
    FString I;
    
    DEADBYDAYLIGHT_API FCharacterSavedInventoryDataV7();
};

