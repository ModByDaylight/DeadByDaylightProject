#pragma once
#include "CoreMinimal.h"
#include "KeyTupleBool.generated.h"

USTRUCT(BlueprintType)
struct FKeyTupleBool {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FName Key;
    
    UPROPERTY(SaveGame)
    bool Value;
    
    DEADBYDAYLIGHT_API FKeyTupleBool();
};

