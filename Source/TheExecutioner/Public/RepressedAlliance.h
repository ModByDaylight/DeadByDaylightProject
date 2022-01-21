#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "SecondaryInteractionProperties.h"
#include "RepressedAlliance.generated.h"

class AGenerator;
class UInteractionDefinition;

UCLASS(meta=(BlueprintSpawnableComponent))
class URepressedAlliance : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FSecondaryInteractionProperties _secondaryActionProperties;
    
    UPROPERTY(EditDefaultsOnly)
    float _repairTimesNeededToActivate[3];
    
    UPROPERTY(EditDefaultsOnly)
    float _generatorBlockDuration;
    
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_CurrentRepairInteractionWithAbility)
    UInteractionDefinition* _currentRepairInteractionWithAbility;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_BlockedGenerator)
    AGenerator* _blockedGenerator;
    
public:
    URepressedAlliance();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_OnActionInputPressed(AGenerator* generator);
    
    UFUNCTION()
    void OnRep_CurrentRepairInteractionWithAbility(UInteractionDefinition* oldRepairInteraction);
    
    UFUNCTION()
    void OnRep_BlockedGenerator(AGenerator* oldGenerator);
    
};

