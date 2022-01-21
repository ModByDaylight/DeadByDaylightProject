#pragma once
#include "CoreMinimal.h"
#include "AnyActorPairQueryRangeIsTrue.h"
#include "OwningPlayerInSpiritHuskRange.generated.h"

class ASlasherPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UOwningPlayerInSpiritHuskRange : public UAnyActorPairQueryRangeIsTrue {
    GENERATED_BODY()
public:
    UOwningPlayerInSpiritHuskRange();
    UFUNCTION()
    void OnKillerSet(ASlasherPlayer* killer);
    
};

