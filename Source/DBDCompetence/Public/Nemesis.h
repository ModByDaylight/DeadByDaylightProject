#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "Nemesis.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class UNemesis : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    float _revealToKillerTime[3];
    
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    float _obliviousTime[3];
    
public:
    UNemesis();
};

