#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "Breakout.generated.h"

class ACamperPlayer;
class ASlasherPlayer;
class ADBDPlayer;

UCLASS(Abstract)
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
    
    UFUNCTION()
    void OnSlasherSet(ASlasherPlayer* slasher);
    
    UFUNCTION()
    void OnRep_IsPerkActive();
    
    UFUNCTION()
    void Authority_OnRangeChanged(const bool inRange);
    
    UFUNCTION()
    void Authority_ImposeWiggleStatusEffect(ACamperPlayer* survivor);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UBreakout();
};

