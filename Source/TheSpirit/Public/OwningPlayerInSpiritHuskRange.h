#pragma once
#include "CoreMinimal.h"
#include "AnyActorPairQueryRangeIsTrue.h"
#include "OwningPlayerInSpiritHuskRange.generated.h"

class ASlasherPlayer;

UCLASS()
class UOwningPlayerInSpiritHuskRange : public UAnyActorPairQueryRangeIsTrue {
    GENERATED_BODY()
public:
    UFUNCTION()
    void OnKillerSet(ASlasherPlayer* killer);
    
    UOwningPlayerInSpiritHuskRange();
};

