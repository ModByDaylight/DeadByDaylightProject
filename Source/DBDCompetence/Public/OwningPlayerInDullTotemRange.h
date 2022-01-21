#pragma once
#include "CoreMinimal.h"
#include "OwningPlayerInTotemRange.h"
#include "OwningPlayerInDullTotemRange.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UOwningPlayerInDullTotemRange : public UOwningPlayerInTotemRange {
    GENERATED_BODY()
public:
    UOwningPlayerInDullTotemRange();
};

