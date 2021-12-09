#pragma once
#include "CoreMinimal.h"
#include "TotemBoundPerk.h"
#include "BoonPerk.generated.h"

class ACamperPlayer;

UCLASS()
class DBDCOMPETENCE_API UBoonPerk : public UTotemBoundPerk {
    GENERATED_BODY()
public:
private:
    UFUNCTION()
    void Authority_OnSurvivorRemoved(ACamperPlayer* survivor);
    
public:
    UBoonPerk();
};

