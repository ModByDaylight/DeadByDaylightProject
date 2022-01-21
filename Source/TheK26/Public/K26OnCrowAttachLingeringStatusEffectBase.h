#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "K26OnCrowAttachLingeringStatusEffectBase.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK26OnCrowAttachLingeringStatusEffectBase : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag _onCrowAttachStateTag;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _lingerTime;
    
public:
    UK26OnCrowAttachLingeringStatusEffectBase();
protected:
    UFUNCTION(BlueprintPure)
    float GetLingerTime() const;
    
};

