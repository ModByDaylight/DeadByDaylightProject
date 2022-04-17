#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EGhostStealthState.h"
#include "GhostStealthComponent.generated.h"

class UCharacterSightableComponent;
class ADBDPlayer;
class AScreenIndicatorWorldMarker;
class UTimerObject;
class ACharacter;
class UStalkerComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UGhostStealthComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSuccessfulAttackInStealth, ADBDPlayer*, target);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStealthStateChanged, EGhostStealthState, stealthState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStealthCancelledByPlayer, ADBDPlayer*, player);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsStealthChanged, bool, isStealth);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsBeingSpotChanged, bool, isBeingSpot);
    
    UPROPERTY(BlueprintAssignable)
    FOnSuccessfulAttackInStealth OnSuccessfulAttackInStealth;
    
    UPROPERTY(BlueprintAssignable)
    FOnStealthStateChanged OnStealthStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnIsStealthChanged OnIsStealthChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnIsBeingSpotChanged OnIsBeingSpotChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnStealthCancelledByPlayer Local_OnStealthCancelledByPlayer;
    
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
    
public:
    UGhostStealthComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
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
    
};

