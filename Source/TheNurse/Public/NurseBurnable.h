#pragma once
#include "CoreMinimal.h"
#include "PlayerLightBurnable.h"
#include "NurseBurnable.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THENURSE_API UNurseBurnable : public UPlayerLightBurnable {
    GENERATED_BODY()
public:
    UNurseBurnable();
};

