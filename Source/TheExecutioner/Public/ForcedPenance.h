#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "ForcedPenance.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UForcedPenance : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _perkActivationDuration[3];
    
    UPROPERTY(EditDefaultsOnly)
    bool _applyOblivious;
    
    UPROPERTY(EditDefaultsOnly)
    bool _applyBroken;
    
    UPROPERTY(Export, Replicated, Transient)
    TArray<UStatusEffect*> _camperObliviousEffects;
    
    UPROPERTY(Export, Replicated, Transient)
    TArray<UStatusEffect*> _camperBrokenEffects;
    
public:
    UForcedPenance();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

