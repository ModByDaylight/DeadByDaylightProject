#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "Bloodlust.generated.h"

class UCurveFloat;
class ADBDPlayer;
class ASlasherPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UBloodlust : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UCurveFloat* BloodlustCurve;
    
private:
    UPROPERTY(ReplicatedUsing=OnRep_BloodlustTime)
    float _bloodlustTime;
    
    UPROPERTY(Transient)
    ASlasherPlayer* _owningKiller;
    
public:
    UBloodlust();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_BloodlustTime(float oldBloodlustTime);
    
    UFUNCTION()
    void OnChaseStartedEvent(ADBDPlayer* chasedPlayer);
    
    UFUNCTION()
    void OnAllChaseEndedEvent();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_ResetBloodlust();
    
public:
    UFUNCTION(BlueprintPure)
    float GetBloodlustTime() const;
    
    UFUNCTION(Exec)
    void DBD_SetBloodlust(const int32 amount, const bool enableDecay);
    
};

