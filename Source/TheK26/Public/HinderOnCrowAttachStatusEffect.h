#pragma once
#include "CoreMinimal.h"
#include "BaseLingeringStatusEffect.h"
#include "TunableStat.h"
#include "GameplayTagContainer.h"
#include "HinderOnCrowAttachStatusEffect.generated.h"

class ASlasherPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UHinderOnCrowAttachStatusEffect : public UBaseLingeringStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag _onCrowAttachStateTag;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _hinderOnIdleLingerTime;
    
public:
    UHinderOnCrowAttachStatusEffect();
    UFUNCTION()
    void OnKillerSet(ASlasherPlayer* killer);
    
};

