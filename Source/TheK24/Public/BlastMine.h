#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "UObject/NoExportTypes.h"
#include "SecondaryInteractionProperties.h"
#include "BlastMine.generated.h"

class AGenerator;
class AActor;
class UInteractionDefinition;
class ASlasherPlayer;
class UChargeableInteractionDefinition;

UCLASS(meta=(BlueprintSpawnableComponent))
class UBlastMine : public UPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float _firecrackerHeight;
    
private:
    UPROPERTY(EditDefaultsOnly)
    FSecondaryInteractionProperties _secondaryActionProperties;
    
    UPROPERTY(EditDefaultsOnly)
    float _secondsToActivatePerk;
    
    UPROPERTY(EditDefaultsOnly)
    float _kickChargePercentMin;
    
    UPROPERTY(EditDefaultsOnly)
    float _kickChargePercentMax;
    
    UPROPERTY(EditDefaultsOnly)
    float _progressPercentRequirementLevels[3];
    
    UPROPERTY(EditDefaultsOnly)
    float __generatorTrapDurationLevels[3];
    
    UPROPERTY(EditDefaultsOnly)
    bool _canBeReusedOnTimerExpire;
    
    UPROPERTY(EditDefaultsOnly)
    bool _canBeReusedAfterTrapActivation;
    
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_CurrentRepairInteractionWithAbility)
    UInteractionDefinition* _currentRepairInteractionWithAbility;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_TrappedGenerator)
    AGenerator* _trappedGenerator;
    
    UPROPERTY(Replicated)
    float _progressPercent;
    
    UPROPERTY(Replicated)
    bool _trapActivated;
    
    UPROPERTY(Replicated)
    bool _repairTimerDone;
    
    UPROPERTY(Transient)
    ASlasherPlayer* _kickInteractionPlayerOwner;
    
    UPROPERTY(Export, Transient)
    UChargeableInteractionDefinition* _kickInteraction;
    
    UPROPERTY(Transient)
    AGenerator* _repairProgressGenerator;
    
public:
    UBlastMine();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void TrapDettachedToGenerator_Cosmetic(AGenerator* trappedGenerator);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void TrapAttachedToGenerator_Cosmetic(AGenerator* trappedGenerator);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void ThrowBubbleIndicator_Cosmetic(FTransform location);
    
private:
    UFUNCTION(Reliable, Server)
    void Server_OnActionInputPressed(AGenerator* generator);
    
    UFUNCTION()
    void OnRep_TrappedGenerator(AGenerator* oldGenerator);
    
    UFUNCTION()
    void OnRep_CurrentRepairInteractionWithAbility(UInteractionDefinition* oldRepairInteraction);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnActivateExplosion(FTransform firecrackerTransform, AGenerator* generator);
    
private:
    UFUNCTION(Client, Reliable)
    void Client_TrapActivatedLoudNotification(FTransform location);
    
    UFUNCTION()
    void Authority_OnRepairProgress(float IndividualChargeAmount, float TotalChargeAmount, AActor* ChargeInstigator, bool WasCoop, float DeltaTime);
    
};

