#pragma once
#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "PigAmbushAttack.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEPIG_API UPigAmbushAttack : public UPounceAttack {
    GENERATED_BODY()
public:
    UPigAmbushAttack();
};

