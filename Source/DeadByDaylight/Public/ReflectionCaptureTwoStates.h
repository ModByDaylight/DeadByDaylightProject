#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ReflectionCaptureTwoStates.generated.h"

USTRUCT(BlueprintType)
struct FReflectionCaptureTwoStates {
    GENERATED_BODY()
public:
    UPROPERTY()
    FComponentReference ComponentReference;
    
    DEADBYDAYLIGHT_API FReflectionCaptureTwoStates();
};

