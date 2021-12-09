#pragma once
#include "CoreMinimal.h"
#include "DBDCharacterMovementComponent.h"
#include "TwinCharacterMovementComponent.generated.h"

UCLASS()
class UTwinCharacterMovementComponent : public UDBDCharacterMovementComponent {
    GENERATED_BODY()
public:
    UTwinCharacterMovementComponent();
};

