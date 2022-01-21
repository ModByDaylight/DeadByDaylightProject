#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ObjectPlacementValidationStrategy.generated.h"

UCLASS(Abstract, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UObjectPlacementValidationStrategy : public UActorComponent {
    GENERATED_BODY()
public:
    UObjectPlacementValidationStrategy();
};

