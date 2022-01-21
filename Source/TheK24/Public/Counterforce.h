#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "Counterforce.generated.h"

class ATotem;

UCLASS(meta=(BlueprintSpawnableComponent))
class UCounterforce : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _totemAuraVisibleDuration[3];
    
    UPROPERTY(EditDefaultsOnly)
    float _startingTotemCleanseSpeedBonus[3];
    
    UPROPERTY(EditDefaultsOnly)
    float _stackableTotemCleanseSpeedBonus[3];
    
public:
    UCounterforce();
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_ShowTotemAura(ATotem* totem);
    
};

