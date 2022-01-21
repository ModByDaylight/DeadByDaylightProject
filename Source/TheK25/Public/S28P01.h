#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "S28P01.generated.h"

class UChargeableComponent;
class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class US28P01 : public UPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float _auraRevealDuration[3];
    
    UPROPERTY(EditDefaultsOnly)
    float _auraRevealRange[3];
    
private:
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_S28P01ChargeableComponent)
    UChargeableComponent* _S28P01ChargeableComponent;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsPerkActive)
    bool _isPerkActive;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsInteractionOngoing)
    bool _isInteractionOngoing;
    
    UPROPERTY(Transient)
    ADBDPlayer* _playerOwner;
    
public:
    US28P01();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_S28P01ChargeableComponent();
    
    UFUNCTION()
    void OnRep_IsPerkActive();
    
    UFUNCTION()
    void OnRep_IsInteractionOngoing();
    
};

