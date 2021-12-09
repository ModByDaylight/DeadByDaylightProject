#pragma once
#include "CoreMinimal.h"
#include "HexPerk.h"
#include "FastTimer.h"
#include "HexRuin.generated.h"

class AGenerator;

UCLASS()
class UHexRuin : public UHexPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<AGenerator*, FFastTimer> _curseActivationTimers;
    
    UFUNCTION()
    void Authority_ConstructActivationTimersMap();
    
public:
    UHexRuin();
};

