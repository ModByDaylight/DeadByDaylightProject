#pragma once
#include "CoreMinimal.h"
#include "CharacterSavedProfileDataV7.h"
#include "CharacterKeyTuple.generated.h"

USTRUCT(BlueprintType)
struct FCharacterKeyTuple {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    int32 Key;
    
    UPROPERTY(SaveGame)
    FCharacterSavedProfileDataV7 Data;
    
    DEADBYDAYLIGHT_API FCharacterKeyTuple();
};

