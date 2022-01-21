#pragma once
#include "CoreMinimal.h"
#include "AnyActorPairQueryRangeIsTrue.h"
#include "OwningPlayerInLamentConfigurationRange.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UOwningPlayerInLamentConfigurationRange : public UAnyActorPairQueryRangeIsTrue {
    GENERATED_BODY()
public:
    UOwningPlayerInLamentConfigurationRange();
};

