#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EffectsLocatorTargets.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FEffectsLocatorTargets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AActor> TargetActorClass;
    
    DEADBYDAYLIGHT_API FEffectsLocatorTargets();
};

