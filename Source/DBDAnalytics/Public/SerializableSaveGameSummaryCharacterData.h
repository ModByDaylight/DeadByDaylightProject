#pragma once
#include "CoreMinimal.h"
#include "CharacterSpecificData.h"
#include "SerializableSaveGameSummaryCharacterData.generated.h"

USTRUCT()
struct FSerializableSaveGameSummaryCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FCharacterSpecificData> CharacterStats;
    
    DBDANALYTICS_API FSerializableSaveGameSummaryCharacterData();
};

