#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "Alert.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAlert : public UPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float _killerAuraRevealDuration[3];
    
private:
    UPROPERTY(Export, Transient)
    UStatusEffect* _alertKillerRevealEffect;
    
public:
    UAlert();
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnPerkActivate_Cosmetic();
    
};

