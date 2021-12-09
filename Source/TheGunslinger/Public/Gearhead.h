#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "FastTimer.h"
#include "Gearhead.generated.h"

class AGenerator;

UCLASS()
class UGearhead : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _perkActivationDuration[3];
    
    UPROPERTY(EditDefaultsOnly)
    bool _greatSkillCheck;
    
    UPROPERTY(EditDefaultsOnly)
    bool _basicAttack;
    
    UPROPERTY(EditDefaultsOnly)
    float _minimumAuraRevealDuration;
    
    UPROPERTY(EditDefaultsOnly)
    int32 _attacksNeededToActivate;
    
    UPROPERTY(Replicated)
    int32 _numAttacksBeforeActivation;
    
    UPROPERTY()
    TMap<AGenerator*, FFastTimer> _timersBeforeUnreveal;
    
    UPROPERTY()
    TArray<AGenerator*> _markedGenerators;
    
    UPROPERTY(ReplicatedUsing=OnRep_RevealedGenerators)
    TArray<AGenerator*> _revealedGenerators;
    
    UPROPERTY()
    TArray<AGenerator*> _local_revealedGenerators;
    
    UFUNCTION()
    void OnRep_RevealedGenerators();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UGearhead();
};

