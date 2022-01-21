#pragma once
#include "CoreMinimal.h"
#include "DefaultOutlineUpdateStrategy.h"
#include "SearchableOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USearchableOutlineUpdateStrategy : public UDefaultOutlineUpdateStrategy {
    GENERATED_BODY()
public:
    USearchableOutlineUpdateStrategy();
};

