#pragma once
#include "CoreMinimal.h"
#include "SerializablePlayerPerks.generated.h"

USTRUCT()
struct FSerializablePlayerPerks {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FName, int32> Perks;
    
    DBDANALYTICS_API FSerializablePlayerPerks();
};

