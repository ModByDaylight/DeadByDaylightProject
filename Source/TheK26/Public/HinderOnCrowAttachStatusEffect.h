#pragma once
#include "CoreMinimal.h"
#include "TunableStat.h"
#include "BaseLingeringStatusEffect.h"
#include "GameplayTagContainer.h"
#include "HinderOnCrowAttachStatusEffect.generated.h"

class ASlasherPlayer;

UCLASS()
class UHinderOnCrowAttachStatusEffect : public UBaseLingeringStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag _onCrowAttachStateTag;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _hinderOnIdleLingerTime;
    
public:
    UFUNCTION()
    void OnKillerSet(ASlasherPlayer* killer);
    
    UHinderOnCrowAttachStatusEffect();
};

