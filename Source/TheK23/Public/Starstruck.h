#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "Starstruck.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UStarstruck : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _exposedEffectDuration[3];
    
    UPROPERTY(EditDefaultsOnly)
    float _perkCooldownDuration[3];
    
    UPROPERTY(Export, Transient)
    TMap<TWeakObjectPtr<ACamperPlayer>, TWeakObjectPtr<UStatusEffect>> _camperExposedEffects;
    
public:
    UStarstruck();
};

