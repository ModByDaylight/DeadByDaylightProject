#pragma once
#include "CoreMinimal.h"
#include "CharacterValidationData.h"
#include "SaveValidationData.generated.h"

USTRUCT()
struct DEADBYDAYLIGHT_API FSaveValidationData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString PlayerUID;
    
    UPROPERTY()
    TMap<int32, FCharacterValidationData> CharacterData;
    
    FSaveValidationData();
};

