#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "Breakout.generated.h"

class ADBDPlayer;
class ASlasherPlayer;
class ACamperPlayer;

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UBreakout : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ASlasherPlayer* _slasher;
    
    UPROPERTY(Transient)
    ADBDPlayer* _playerOwner;
    
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    float _hasteEffect[3];
    
    UPROPERTY(EditDefaultsOnly)
    float _wiggleEffect;
    
    UPROPERTY(EditDefaultsOnly)
    float _survivorDistanceMax;
    
    UPROPERTY(ReplicatedUsing=OnRep_IsPerkActive)
    bool _isPerkActive;
    
public:
    UBreakout();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnSlasherSet(ASlasherPlayer* slasher);
    
    UFUNCTION()
    void OnRep_IsPerkActive();
    
    UFUNCTION()
    void Authority_OnRangeChanged(const bool inRange);
    
    UFUNCTION()
    void Authority_ImposeWiggleStatusEffect(ACamperPlayer* survivor);
    
};

