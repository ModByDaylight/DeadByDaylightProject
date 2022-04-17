#pragma once
#include "CoreMinimal.h"
#include "HexPerk.h"
#include "FastTimer.h"
#include "HexRuin.generated.h"

class AGenerator;

UCLASS(meta=(BlueprintSpawnableComponent))
class UHexRuin : public UHexPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<AGenerator*, FFastTimer> _curseActivationTimers;
    
public:
    UHexRuin();
private:
    UFUNCTION()
    void Authority_ConstructActivationTimersMap();
    
};

