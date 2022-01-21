#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "PowerStruggle.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UPowerStruggle : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _wigglePercentToActivatePerk[3];
    
public:
    UPowerStruggle();
};

