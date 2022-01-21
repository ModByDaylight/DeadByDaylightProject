#pragma once
#include "CoreMinimal.h"
#include "DBDCharacterMovementComponent.h"
#include "SlasherMovementComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class USlasherMovementComponent : public UDBDCharacterMovementComponent {
    GENERATED_BODY()
public:
    USlasherMovementComponent();
};

