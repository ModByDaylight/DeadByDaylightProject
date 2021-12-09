#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "RandomizableActorSpawner.generated.h"

USTRUCT(BlueprintType)
struct FRandomizableActorSpawner {
    GENERATED_BODY()
public:
    UPROPERTY()
    FComponentReference ComponentReference;
    
    DEADBYDAYLIGHT_API FRandomizableActorSpawner();
};

