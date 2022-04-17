#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BloodOrbStateMonitorDelegateDelegate.h"
#include "EBloodOrbState.h"
#include "BloodOrbStateMonitorComponent.generated.h"

class ABloodOrb;

UCLASS(meta=(BlueprintSpawnableComponent))
class UBloodOrbStateMonitorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBloodOrbStateMonitorDelegate OnBloodOrbAbsorbedCosmetic;
    
    UBloodOrbStateMonitorComponent();
private:
    UFUNCTION()
    void OnBloodOrbStateChanged(const EBloodOrbState oldState, const EBloodOrbState newState, const ABloodOrb* bloodOrb) const;
    
    UFUNCTION()
    void OnBloodOrbSpawned(const ABloodOrb* bloodOrb);
    
    UFUNCTION()
    void OnBloodOrbDestroyed(const ABloodOrb* bloodOrb);
    
};

