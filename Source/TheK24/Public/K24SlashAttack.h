#pragma once
#include "CoreMinimal.h"
#include "K24PounceAttack.h"
#include "K24SlashAttack.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK24SlashAttack : public UK24PounceAttack {
    GENERATED_BODY()
public:
    UK24SlashAttack();
};

