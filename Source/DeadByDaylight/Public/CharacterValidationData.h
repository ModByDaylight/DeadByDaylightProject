#pragma once
#include "CoreMinimal.h"
#include "CharacterValidationData.generated.h"

USTRUCT(BlueprintType)
struct FCharacterValidationData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 PrestigeLevel;
    
    UPROPERTY()
    int32 BloodWebLevel;
    
    DEADBYDAYLIGHT_API FCharacterValidationData();
};

