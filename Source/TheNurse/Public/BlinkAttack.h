#pragma once
#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "BlinkAttack.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THENURSE_API UBlinkAttack : public UPounceAttack {
    GENERATED_BODY()
public:
    UBlinkAttack();
};

