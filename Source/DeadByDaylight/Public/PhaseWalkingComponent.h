#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "DBDTunableRowHandle.h"
#include "PhaseWalkInfo.h"
#include "UObject/NoExportTypes.h"
#include "TagStateBool.h"
#include "TunableStat.h"
#include "DBDBidirectionalTimer.h"
#include "DBDTimer.h"
#include "PhaseWalkingComponent.generated.h"

class AActor;
class UDecoySlasherComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPhaseWalkingComponentOnMaxActivePhaseWalkCharges);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPhaseWalkingComponentTriggerSurvivorVisibilityVFX, bool, visible);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPhaseWalkingComponentOnPhaseWalkInfoReceived, const FPhaseWalkInfo&, phaseWalkInfo);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPhaseWalkingComponentOnGameEndedVFX);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FPhaseWalkingComponentTriggerKillerVisibilityVFX, bool, wasPassivePhaseWalking, bool, wasActivePhaseWalking, const FPhaseWalkInfo&, phaseWalkInfo);

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UPhaseWalkingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPhaseWalkingComponentOnPhaseWalkInfoReceived OnPhaseWalkInfoReceived;
    
    UPROPERTY(BlueprintAssignable)
    FPhaseWalkingComponentOnGameEndedVFX OnGameEndedVFX;
    
    UPROPERTY(BlueprintAssignable)
    FPhaseWalkingComponentTriggerSurvivorVisibilityVFX TriggerSurvivorVisibilityVFX;
    
    UPROPERTY(BlueprintAssignable)
    FPhaseWalkingComponentTriggerKillerVisibilityVFX TriggerKillerVisibilityVFX;
    
    UPROPERTY(BlueprintAssignable)
    FPhaseWalkingComponentOnMaxActivePhaseWalkCharges OnMaxActivePhaseWalkCharges;
    
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> _huskClass;
    
    UPROPERTY(Transient)
    FTagStateBool _isActivePhaseWalking;
    
    UPROPERTY(Transient)
    FTagStateBool _isPassivePhaseWalking;
    
    UPROPERTY(Transient)
    bool _isInteractionPhaseWalking;
    
    UPROPERTY(Replicated)
    AActor* _husk;
    
    UPROPERTY(Transient)
    FDBDBidirectionalTimer _activePhaseWalkCharges;
    
    UPROPERTY(Transient)
    bool _survivorsAreVisible;
    
    UPROPERTY(EditDefaultsOnly)
    int32 _passivePhaseWalkHusksCount;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _activePhaseWalkChargeGainRate;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _passivePhaseWalkDuration;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _passivePhaseWalkFirstCooldownDuration;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _passivePhaseWalkCooldownDurationMin;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _passivePhaseWalkCooldownDurationMax;
    
    UPROPERTY(EditDefaultsOnly)
    FTunableStat _activePhaseWalkMaxCharge;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _activePhaseWalkMaxAcceleration;
    
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _defaultMaxAcceleration;
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateSurvivorVisibility(bool visible);
    
    UFUNCTION(BlueprintCallable)
    void UpdateKillerVisibility();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SpawnPassivePhaseWalkHusks();
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_Broadcast_PhaseWalk(const FPhaseWalkInfo& phaseWalkInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void RefillActivePhaseWalkCharges();
    
private:
    UFUNCTION()
    void OnLevelReadyToPlay();
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void Multicast_Broadcast_PhaseWalk(const FPhaseWalkInfo& phaseWalkInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void ModifyActivePhaseWalkCharges(float delta);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MakePassivePhaseWalkHusksVisible(const FTransform& huskTransform, float opacityValue, float speedValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void Local_PhaseWalk(const FPhaseWalkInfo& phaseWalkInfo);
    
    UFUNCTION(BlueprintCallable)
    void Local_EndPhaseWalks();
    
    UFUNCTION(BlueprintPure)
    bool IsPhaseWalking() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPassivePhaseWalking() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDecoyActive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsActivePhaseWalking() const;
    
protected:
    UFUNCTION(BlueprintPure)
    int32 GetSpiritPassivePhaseWalkHusksCountToSpawn() const;
    
public:
    UFUNCTION(BlueprintPure)
    FDBDTimer GetPassivePhaseWalkTimer() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetHusk() const;
    
    UFUNCTION(BlueprintPure)
    UDecoySlasherComponent* GetDecoySlasherComponent() const;
    
    UFUNCTION(BlueprintPure)
    float GetActivePhaseWalkCharges() const;
    
    UFUNCTION(BlueprintPure)
    float GetActivePhaseWalkChargePercentage() const;
    
    UFUNCTION(BlueprintPure)
    bool CanStartActivePhaseWalk() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UPhaseWalkingComponent();
};

