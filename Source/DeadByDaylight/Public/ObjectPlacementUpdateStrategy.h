#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ObjectPlacementUpdateStrategy.generated.h"

UCLASS(Abstract, EditInlineNew)
class UObjectPlacementUpdateStrategy : public UObject {
    GENERATED_BODY()
public:
    UObjectPlacementUpdateStrategy();
};

