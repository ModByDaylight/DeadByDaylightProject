#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BlindingEffectorInterface.h"
#include "DBDTunableRowHandle.h"
#include "FlashlightComponent.generated.h"

class UFlashlightableComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UFlashlightComponent : public UActorComponent, public IBlindingEffectorInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFlashlightEvent);
    
    UPROPERTY(BlueprintAssignable)
    FOnFlashlightEvent OnFlashlightTurnedOn;
    
    UPROPERTY(BlueprintAssignable)
    FOnFlashlightEvent OnFlashlightTurnedOff;
    
    UPROPERTY(BlueprintAssignable)
    FOnFlashlightEvent OnFlashlightablesUpdated;
    
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
    UFlashlightComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
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
    
    
    // Fix for true pure virtual functions not being implemented
};

