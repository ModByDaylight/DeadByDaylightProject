#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "DeadMansSwitch.generated.h"

class AGenerator;

UCLASS(meta=(BlueprintSpawnableComponent))
class UDeadMansSwitch : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _activationDurationByLevels[3];
    
    UPROPERTY(EditDefaultsOnly)
    bool _anySurvivorLetGo;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_BlockedGenerators)
    TArray<AGenerator*> _blockedGenerators;
    
public:
    UDeadMansSwitch();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_BlockedGenerators();
    
};

