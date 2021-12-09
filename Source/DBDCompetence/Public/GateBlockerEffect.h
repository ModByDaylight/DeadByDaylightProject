#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "GateBlockerEffect.generated.h"

UCLASS()
class DBDCOMPETENCE_API UGateBlockerEffect : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float _blockGateLingeringTime;
    
    UFUNCTION()
    void RemoveCantEscapeFlag();
    
public:
    UGateBlockerEffect();
};

