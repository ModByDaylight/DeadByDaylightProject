#pragma once
#include "CoreMinimal.h"
#include "PossessionComponent.h"
#include "TwinPossessionComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UTwinPossessionComponent : public UPossessionComponent {
    GENERATED_BODY()
public:
    UTwinPossessionComponent();
};

