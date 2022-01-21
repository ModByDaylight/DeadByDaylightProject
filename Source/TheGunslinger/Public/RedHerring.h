#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "RedHerring.generated.h"

class AGenerator;

UCLASS(meta=(BlueprintSpawnableComponent))
class URedHerring : public UPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    AGenerator* _generatorBeingRepaired;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_MarkedGenerator)
    AGenerator* _markedGenerator;
    
    UPROPERTY(EditDefaultsOnly)
    float _secondsToActivatePerk;
    
    UPROPERTY(EditDefaultsOnly)
    float _loudNoiseTriggeredNotifyTime;
    
    UPROPERTY(EditDefaultsOnly)
    float _cooldownLevels[3];
    
public:
    URedHerring();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_MarkedGenerator(AGenerator* oldMarkedGenerator);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnLoudNoiseTriggered();
    
};

