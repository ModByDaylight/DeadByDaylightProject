#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TunableStat.h"
#include "StatusEffect.h"
#include "K26KillerInstinctStatusEffect.generated.h"

class UInteractionDefinition;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK26KillerInstinctStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _lingerDuration;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UInteractionDefinition> _openExitGateInteractionClass;
    
    UPROPERTY(Transient)
    bool _hasInitializedLingerDuration;
    
public:
    UK26KillerInstinctStatusEffect();
};

