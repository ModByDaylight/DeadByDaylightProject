#pragma once
#include "CoreMinimal.h"
#include "HexPerk.h"
#include "HexRetribution.generated.h"

UCLASS()
class UHexRetribution : public UHexPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _obliviousDurationByLevels[3];
    
    UPROPERTY(EditDefaultsOnly)
    float _auraRevealDuration;
    
public:
    UHexRetribution();
};

