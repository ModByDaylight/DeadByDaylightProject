#pragma once
#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "ItemAddon.h"
#include "BlackBox.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UBlackBox : public UItemAddon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _blockDuration;
    
public:
    UBlackBox();
};

