#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "GateBlockerEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UGateBlockerEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float _blockGateLingeringTime;
    
public:
    UGateBlockerEffect();
protected:
    UFUNCTION()
    void RemoveCantEscapeFlag();
    
};

