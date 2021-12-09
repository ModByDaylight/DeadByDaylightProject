#pragma once
#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "StatusEffect.h"
#include "GameplayTagContainer.h"
#include "K26OnCrowAttachLingeringStatusEffectBase.generated.h"

UCLASS()
class UK26OnCrowAttachLingeringStatusEffectBase : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag _onCrowAttachStateTag;
    
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _lingerTime;
    
    UFUNCTION(BlueprintPure)
    float GetLingerTime() const;
    
public:
    UK26OnCrowAttachLingeringStatusEffectBase();
};

