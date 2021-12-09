#pragma once
#include "CoreMinimal.h"
#include "MindFocusObjectEntry.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FMindFocusObjectEntry {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UObject*> FocusedBy;
    
    UPROPERTY()
    float FocusedStartTime;
    
    UPROPERTY()
    TMap<FName, float> CooldownMap;
    
    DBDBOTS_API FMindFocusObjectEntry();
};

