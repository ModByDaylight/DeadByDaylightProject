#pragma once
#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "TunableStat.h"
#include "GameplayTagContainer.h"
#include "SecondsToRateModifierBaseAddon.generated.h"

UCLASS()
class USecondsToRateModifierBaseAddon : public UItemAddon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _chargeRate;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _maxCharge;
    
    UPROPERTY(EditDefaultsOnly)
    float _secondsToAdd;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag _rateModifierTagToCompute;
    
public:
    USecondsToRateModifierBaseAddon();
};

