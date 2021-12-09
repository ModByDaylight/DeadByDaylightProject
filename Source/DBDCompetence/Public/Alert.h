#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "Alert.generated.h"

class UStatusEffect;

UCLASS()
class UAlert : public UPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float _killerAuraRevealDuration[3];
    
private:
    UPROPERTY(Export, Transient)
    UStatusEffect* _alertKillerRevealEffect;
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnPerkActivate_Cosmetic();
    
public:
    UAlert();
};

