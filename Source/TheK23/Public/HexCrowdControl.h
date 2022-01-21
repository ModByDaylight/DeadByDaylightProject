#pragma once
#include "CoreMinimal.h"
#include "HexPerk.h"
#include "HexCrowdControl.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UHexCrowdControl : public UHexPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _windowVaultBlockDuration[3];
    
public:
    UHexCrowdControl();
};

