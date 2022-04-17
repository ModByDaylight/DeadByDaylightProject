#pragma once
#include "CoreMinimal.h"
#include "DBDPlayerControllerBase.h"
#include "OnPawnLeavingGameDelegateDelegate.h"
#include "EPlayerRole.h"
#include "OnLocallyObservedChangedDelegateDelegate.h"
#include "DBDPlayerController.generated.h"

class APawn;
class ANetworkFenceActor;
class UDBDBaseInputHandler;
class ADBDPlayerState;
class ADBDPlayer;

UCLASS()
class DEADBYDAYLIGHT_API ADBDPlayerController : public ADBDPlayerControllerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnPawnLeavingGameDelegate OnPawnLeavingGame;
    
    UPROPERTY(BlueprintAssignable)
    FOnLocallyObservedChangedDelegate OnLocallyObservedChanged;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Fence)
    ANetworkFenceActor* _theFence;
    
    UPROPERTY(Transient)
    UDBDBaseInputHandler* _inputHandler;
    
    UPROPERTY(Transient)
    APawn* _aiPawn;
    
    UPROPERTY(EditDefaultsOnly)
    EPlayerRole _controllerGameRole;
    
public:
    ADBDPlayerController();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetShouldMoveInputReplicateToServer(bool shouldReplicate);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerViewPlayer(const FString& playerName);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetSpectatorModeInEditor(bool on, ADBDPlayerState* spectatingPlayerState);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetSpectatorMode(bool on);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetReadyToTravel();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetHasMoveInputThisFrame(bool hasMoveInputThisFrame);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_RequestEndGame();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_LeaveGame(bool joiningLobby);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_DebugSend(const FString& data);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_ActivateAIAll(bool activate, int32 playerRank, int8 playerRole);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_ActivateAI(bool activate, int32 playerRank);
    
private:
    UFUNCTION()
    void OnRep_Fence();
    
public:
    UFUNCTION(BlueprintPure)
    bool MobileJoystickInput_Pressed(int32 joystickIndex) const;
    
    UFUNCTION(BlueprintPure)
    bool IsSpectating() const;
    
    UFUNCTION(BlueprintCallable)
    void ImplementRunLockMechanic();
    
    UFUNCTION(BlueprintPure)
    ADBDPlayerState* GetSpectatedPlayerState() const;
    
    UFUNCTION(BlueprintPure)
    ADBDPlayer* GetSpectatedPlayer() const;
    
    UFUNCTION(BlueprintPure)
    ADBDPlayer* GetControlledPlayer() const;
    
    UFUNCTION(BlueprintPure)
    APawn* GetAIPawn() const;
    
private:
    UFUNCTION(Client, Reliable)
    void Client_SpectateAI(APawn* aiPawn);
    
public:
    UFUNCTION(Client, Reliable)
    void Client_SetSpectatorModeInEditor(bool on, ADBDPlayerState* spectatingPlayerState);
    
    UFUNCTION(Client, Reliable)
    void Client_SetSpectatorMode(bool on);
    
    UFUNCTION(BlueprintCallable)
    void ActivateAI(bool activate, int32 playerRank);
    
};

