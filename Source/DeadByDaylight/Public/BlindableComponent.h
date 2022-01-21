#pragma once
#include "CoreMinimal.h"
#include "BlindableBaseComponent.h"
#include "BlindableComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UBlindableComponent : public UBlindableBaseComponent {
    GENERATED_BODY()
public:
    UBlindableComponent();
};

