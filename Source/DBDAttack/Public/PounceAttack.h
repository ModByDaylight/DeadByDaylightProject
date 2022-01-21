#pragma once
#include "CoreMinimal.h"
#include "DBDAttack.h"
#include "PounceAttack.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDATTACK_API UPounceAttack : public UDBDAttack {
    GENERATED_BODY()
public:
    UPounceAttack();
};

