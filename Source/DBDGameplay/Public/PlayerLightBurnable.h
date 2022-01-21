#pragma once
#include "CoreMinimal.h"
#include "LightBurnable.h"
#include "PlayerLightBurnable.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UPlayerLightBurnable : public ULightBurnable {
    GENERATED_BODY()
public:
    UPlayerLightBurnable();
};

