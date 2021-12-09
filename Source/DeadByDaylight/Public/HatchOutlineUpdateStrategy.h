#pragma once
#include "CoreMinimal.h"
#include "DefaultOutlineUpdateStrategy.h"
#include "HatchOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UHatchOutlineUpdateStrategy : public UDefaultOutlineUpdateStrategy {
    GENERATED_BODY()
public:
    UHatchOutlineUpdateStrategy();
};

