#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "UObject/NoExportTypes.h"
#include "FastTimer.h"
#include "K26P01.generated.h"

class AGenerator;
class AActor;

UCLASS()
class UK26P01 : public UPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float _generatorBlockDuration[3];
    
    UPROPERTY(EditDefaultsOnly)
    float _auraRevealDuration[3];
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor _generatorAuraColorForKiller;
    
    UPROPERTY(EditDefaultsOnly)
    int32 _survivorsToBeHooked;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_BlockedGenerators)
    TArray<AGenerator*> _blockedGenerators;
    
    UPROPERTY(Transient)
    TArray<AActor*> _hookedSurvivors;
    
    UPROPERTY(Transient)
    TArray<FFastTimer> _generatorBlockingTimers;
    
    UFUNCTION()
    void OnRep_BlockedGenerators();
    
    UFUNCTION()
    void Authority_OnBlockTimerDone(AGenerator* generator);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UK26P01();
};

