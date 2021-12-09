#pragma once
#include "CoreMinimal.h"
#include "CharacterSpecificData.generated.h"

USTRUCT(BlueprintType)
struct FCharacterSpecificData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    int32 Level;
    
    UPROPERTY()
    int32 PrestigeLevel;
    
    DBDANALYTICS_API FCharacterSpecificData();
};

