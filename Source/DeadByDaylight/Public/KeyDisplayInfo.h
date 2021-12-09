#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "KeyDisplayInfo.generated.h"

USTRUCT(BlueprintType)
struct FKeyDisplayInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FKey Key;
    
    UPROPERTY()
    FString KeyDisplayName;
    
    UPROPERTY()
    FString PromptType;
    
    DEADBYDAYLIGHT_API FKeyDisplayInfo();
};

