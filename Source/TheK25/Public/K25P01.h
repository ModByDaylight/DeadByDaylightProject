#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "UObject/NoExportTypes.h"
#include "FastTimer.h"
#include "K25P01.generated.h"

class AGenerator;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK25P01 : public UPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float _generatorBlockDuration[3];
    
    UPROPERTY(EditDefaultsOnly)
    float _auraRevealDuration[3];
    
    UPROPERTY(EditDefaultsOnly)
    bool _allowPerkToBlockZeroProgressionGenerators;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _generatorAuraColorForKiller;
    
private:
    UPROPERTY(Transient)
    TArray<FFastTimer> _generatorBlockingTimers;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_GeneratorsBlocked)
    TArray<AGenerator*> _generatorsBlocked;
    
    UPROPERTY(Transient)
    TArray<AGenerator*> _local_generatorsBlocked;
    
public:
    UK25P01();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_GeneratorsBlocked();
    
    UFUNCTION()
    void Authority_OnBlockTimerDone(AGenerator* generator);
    
};

