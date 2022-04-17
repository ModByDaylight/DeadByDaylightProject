#pragma once
#include "CoreMinimal.h"
#include "PossessionComponent.h"
#include "DBDTunableRowHandle.h"
#include "KillerPossessionComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UKillerPossessionComponent : public UPossessionComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(ReplicatedUsing=OnRep_ShouldDeactivateCollisionsWithSurvivors)
    bool _shouldDeactivateCollisionsWithSurvivors;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _timeBeforeCollisionsDeactivation;
    
public:
    UKillerPossessionComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_ShouldDeactivateCollisionsWithSurvivors();
    
};

