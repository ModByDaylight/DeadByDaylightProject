#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "BloodPact.generated.h"

class UStatusEffect;
class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UBloodPact : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    bool _dyingToInjured;
    
    UPROPERTY(EditDefaultsOnly)
    bool _fullHealthStateOnly;
    
    UPROPERTY(EditDefaultsOnly)
    float _hasteEffectRange;
    
    UPROPERTY(EditDefaultsOnly)
    float _hasteEffectMovementSpeedIncrease[3];
    
    UPROPERTY(Export, Transient)
    UStatusEffect* _ownerStatusEffect;
    
    UPROPERTY(Export, Transient)
    UStatusEffect* _obsessionStatusEffect;
    
    UPROPERTY(Export, Transient)
    UStatusEffect* _ownerHasteStatusEffect;
    
    UPROPERTY(Export, Transient)
    UStatusEffect* _otherPlayerHasteStatusEffect;
    
    UPROPERTY(Transient)
    ADBDPlayer* _otherPlayer;
    
public:
    UBloodPact();
private:
    UFUNCTION()
    void Authority_OnInRangeChanged(const bool inRange);
    
};

