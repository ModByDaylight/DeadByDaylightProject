#pragma once
#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "OniBasicAttack.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEONI_API UOniBasicAttack : public UPounceAttack {
    GENERATED_BODY()
public:
    UOniBasicAttack();
};

