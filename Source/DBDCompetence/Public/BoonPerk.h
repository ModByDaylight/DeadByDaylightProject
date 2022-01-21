#pragma once
#include "CoreMinimal.h"
#include "TotemBoundPerk.h"
#include "BoonPerk.generated.h"

class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UBoonPerk : public UTotemBoundPerk {
    GENERATED_BODY()
public:
    UBoonPerk();
private:
    UFUNCTION()
    void Authority_OnSurvivorRemoved(ACamperPlayer* survivor);
    
};

