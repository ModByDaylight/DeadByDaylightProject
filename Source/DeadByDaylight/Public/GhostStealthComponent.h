#pragma once
#include "CoreMinimal.h"
#include "EGhostStealthState.h"
#include "Components/ActorComponent.h"
#include "GhostStealthComponent.generated.h"

class UCharacterSightableComponent;
class ACharacter;
class UStalkerComponent;
class UTimerObject;
class ADBDPlayer;
class AScreenIndicatorWorldMarker;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGhostStealthComponentOnSuccessfulAttackInStealth, ADBDPlayer*, target);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGhostStealthComponentOnStealthStateChanged, EGhostStealthState, stealthState);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGhostStealthComponentOnIsStealthChanged, bool, isStealth);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGhostStealthComponentOnIsBeingSpotChanged, bool, isBeingSpot);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGhostStealthComponentLocal_OnStealthCancelledByPlayer, ADBDPlayer*, player);

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UGhostStealthComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGhostStealthComponentOnSuccessfulAttackInStealth OnSuccessfulAttackInStealth;
    
    UPROPERTY(BlueprintAssignable)
    FGhostStealthComponentOnStealthStateChanged OnStealthStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FGhostStealthComponentOnIsStealthChanged OnIsStealthChanged;
    
    UPROPERTY(BlueprintAssignable)
    FGhostStealthComponentOnIsBeingSpotChanged OnIsBeingSpotChanged;
    
    UPROPERTY(BlueprintAssignable)
    FGhostStealthComponentLocal_OnStealthCancelledByPlayer Local_OnStealthCancelledByPlayer;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_StealthState)
    EGhostStealthState _stealthState;
    
    UPROPERTY(Export, Transient)
    UTimerObject* _cooldownTimer;
    
    UPROPERTY()
    TMap<ACharacter*, TWeakObjectPtr<AScreenIndicatorWorldMarker>> _markers;
    
    UPROPERTY(EditAnywhere)
    float _markerMaxAngleOffset;
    
    UPROPERTY(EditAnywhere)
    bool _useKillerInstinctWhenSpotted;
    
    UPROPERTY(Export, Transient)
    UCharacterSightableComponent* _sightableComponent;
    
    UPROPERTY(Export, Transient)
    UStalkerComponent* _stalkerComponent;
    
    UFUNCTION()
    void SetRedStainVisibility(const bool visible);
    
    UFUNCTION()
    void OnRep_StealthState(EGhostStealthState previousState);
    
    UFUNCTION(NetMulticast, Unreliable)
    void Multicast_BroadcastOnSuccessfulAttackInStealth(ADBDPlayer* target);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsStealthReadyToActivate() const;
    
    UFUNCTION(BlueprintPure)
    bool IsStealth() const;
    
    UFUNCTION(BlueprintPure)
    EGhostStealthState GetStealthState() const;
    
    UFUNCTION(BlueprintPure)
    float GetStealthChargePercent() const;
    
private:
    UFUNCTION(Client, Reliable)
    void Client_SpawnMarkerOnCharacter(ACharacter* character);
    
    UFUNCTION(Client, Reliable)
    void Client_OnPlayerSpottedKiller(ADBDPlayer* player);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_TryActivateStealth();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UGhostStealthComponent();
};

