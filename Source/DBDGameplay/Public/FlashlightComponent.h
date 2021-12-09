#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BlindingEffectorInterface.h"
#include "DBDTunableRowHandle.h"
#include "FlashlightComponent.generated.h"

class UFlashlightableComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFlashlightComponentOnFlashlightTurnedOn);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFlashlightComponentOnFlashlightTurnedOff);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFlashlightComponentOnFlashlightablesUpdated);

UCLASS(BlueprintType)
class DBDGAMEPLAY_API UFlashlightComponent : public UActorComponent, public IBlindingEffectorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFlashlightComponentOnFlashlightTurnedOn OnFlashlightTurnedOn;
    
    UPROPERTY(BlueprintAssignable)
    FFlashlightComponentOnFlashlightTurnedOff OnFlashlightTurnedOff;
    
    UPROPERTY(BlueprintAssignable)
    FFlashlightComponentOnFlashlightablesUpdated OnFlashlightablesUpdated;
    
private:
    UPROPERTY(EditAnywhere)
    FDBDTunableRowHandle _baseBlindnessDuration;
    
    UPROPERTY(EditAnywhere)
    float _baseAccuracy;
    
    UPROPERTY(EditAnywhere)
    float _lagDuration;
    
    UPROPERTY(Export, Transient)
    TSet<UFlashlightableComponent*> _flashlightables;
    
    UPROPERTY(Export, Transient)
    TSet<UFlashlightableComponent*> _autonomousLitFlashlightables;
    
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_ReplicatedLitFlashlightables)
    TArray<UFlashlightableComponent*> _replicatedLitFlashlightables;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsOwnerLagging)
    bool _isOwnerLagging;
    
public:
    UFUNCTION(BlueprintCallable)
    void TurnOn();
    
    UFUNCTION(BlueprintCallable)
    void TurnOff();
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetAndUpdateAutonomousLitFlashlightables(const TArray<UFlashlightableComponent*>& newLitFlashlightables);
    
    UFUNCTION()
    void OnRep_ReplicatedLitFlashlightables();
    
    UFUNCTION()
    void OnRep_IsOwnerLagging();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsOn() const;
    
    UFUNCTION(BlueprintPure)
    float GetEffectiveTimeToBlindModifier() const;
    
    UFUNCTION(BlueprintPure)
    float GetEffectiveBlindnessDuration() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFlashlightComponent();
};

