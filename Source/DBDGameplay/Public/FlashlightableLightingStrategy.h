#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FlashlightableLightingStrategy.generated.h"

UCLASS(Abstract, EditInlineNew)
class DBDGAMEPLAY_API UFlashlightableLightingStrategy : public UObject {
    GENERATED_BODY()
public:
    UFlashlightableLightingStrategy();
};

