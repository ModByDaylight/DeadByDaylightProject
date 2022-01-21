#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ImposeStatusEffectOnEventAddon.h"
#include "Addon_K24_18.generated.h"

class AZombieEscapeDoorPointsActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_K24_18 : public UImposeStatusEffectOnEventAddon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AZombieEscapeDoorPointsActor> _zombieEscapeDoorPointsActor;
    
public:
    UAddon_K24_18();
};

