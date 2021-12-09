#pragma once
#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "SpiritHuskOutlineUpdateStrategy.generated.h"

class ASlasherPlayer;

UCLASS(EditInlineNew)
class THESPIRIT_API USpiritHuskOutlineUpdateStrategy : public UOutlineUpdateStrategy {
    GENERATED_BODY()
public:
private:
    UFUNCTION()
    void OnSlasherSet(ASlasherPlayer* slasher);
    
public:
    USpiritHuskOutlineUpdateStrategy();
};

