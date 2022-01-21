#pragma once
#include "CoreMinimal.h"
#include "GateBlockerEffect.h"
#include "SingleGateBlockerEffect.generated.h"

class AEscapeDoor;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API USingleGateBlockerEffect : public UGateBlockerEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _distanceThreshold;
    
    UPROPERTY(Transient)
    AEscapeDoor* _gate;
    
    UPROPERTY(Replicated, Transient)
    bool _isInRange;
    
public:
    USingleGateBlockerEffect();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

