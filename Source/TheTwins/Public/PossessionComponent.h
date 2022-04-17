#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PossessionComponent.generated.h"

class ADBDPlayer;
class AAIController;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UPossessionComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    bool _startPossessed;
    
    UPROPERTY(Transient)
    AAIController* _emptyController;
    
public:
    UPossessionComponent();
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_StartPossessionOf(ADBDPlayer* playerToPossess, bool shouldStartBeingPossessedInteraction);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_NotifyPossessionDone();
    
    UFUNCTION()
    void OnLevelReadyToPlay();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_StartPossessionOf(ADBDPlayer* playerToPossess);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_NotifyPossessionDone();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPossessed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDormant() const;
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void CosmeticLocal_OnUncontrolled(ADBDPlayer* player);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void CosmeticLocal_OnControlled(ADBDPlayer* player);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Cosmetic_OnControlledChanged(ADBDPlayer* player, bool isControlled);
    
private:
    UFUNCTION(Client, Reliable)
    void Client_StartStateMachineDriverChangeProcess();
    
};

