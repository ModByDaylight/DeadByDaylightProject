#pragma once
#include "CoreMinimal.h"
#include "PossessionComponent.h"
#include "DBDTunableRowHandle.h"
#include "KillerPossessionComponent.generated.h"

UCLASS()
class UKillerPossessionComponent : public UPossessionComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(ReplicatedUsing=OnRep_ShouldDeactivateCollisionsWithSurvivors)
    bool _shouldDeactivateCollisionsWithSurvivors;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _timeBeforeCollisionsDeactivation;
    
    UFUNCTION()
    void OnRep_ShouldDeactivateCollisionsWithSurvivors();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UKillerPossessionComponent();
};

