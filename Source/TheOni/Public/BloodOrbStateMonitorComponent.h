#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EBloodOrbState.h"
#include "BloodOrbStateMonitorComponent.generated.h"

class ABloodOrb;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBloodOrbStateMonitorComponentOnBloodOrbAbsorbedCosmetic, ABloodOrb*, bloodOrb);

UCLASS()
class UBloodOrbStateMonitorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBloodOrbStateMonitorComponentOnBloodOrbAbsorbedCosmetic OnBloodOrbAbsorbedCosmetic;
    
private:
    UFUNCTION()
    void OnBloodOrbStateChanged(const EBloodOrbState oldState, const EBloodOrbState newState, const ABloodOrb* bloodOrb) const;
    
    UFUNCTION()
    void OnBloodOrbSpawned(const ABloodOrb* bloodOrb);
    
    UFUNCTION()
    void OnBloodOrbDestroyed(const ABloodOrb* bloodOrb);
    
public:
    UBloodOrbStateMonitorComponent();
};

