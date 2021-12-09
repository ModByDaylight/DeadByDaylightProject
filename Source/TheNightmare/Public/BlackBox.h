#pragma once
#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "DBDTunableRowHandle.h"
#include "BlackBox.generated.h"

UCLASS()
class UBlackBox : public UItemAddon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _blockDuration;
    
public:
    UBlackBox();
};

