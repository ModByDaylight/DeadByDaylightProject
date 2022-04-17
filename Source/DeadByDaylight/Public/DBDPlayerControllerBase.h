#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PlayerLoadoutData.h"
#include "PlayerSavedProfileDataShared.h"
#include "DBDPlayerControllerBase.generated.h"

class ADBDPlayer;

UCLASS()
class DEADBYDAYLIGHT_API ADBDPlayerControllerBase : public APlayerController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient)
    ADBDPlayer* _mainCharacter;
    
public:
    ADBDPlayerControllerBase();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_UpdateReplicatedPips(int32 pipsToAdd);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SendMessage(const FString& message);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SendClientAuthentication(const FString& authClientTicket, uint64 steamID, uint32 ticketLength);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_ReceivePlayerProfile(FPlayerSavedProfileDataShared savedProfileData, FPlayerLoadoutData playerLoadout);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_EACMessageFromClient(const TArray<uint8>& message, uint32 messageLength);
    
    UFUNCTION(Exec)
    void Server(const FString& commandLine);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DBD_UpdateLocalStats();
    
    UFUNCTION(Exec)
    void DBD_SetCurrentCharacterPrestigeDatesPast();
    
    UFUNCTION(Exec)
    void DBD_SetCurrentCharacterPrestigeDatesNow();
    
    UFUNCTION(Exec)
    void DBD_SetCurrentCharacterPrestigeDatesFuture();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DBD_FireTestScore(int32 category, float value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DBD_FillScoreCategory(int32 category);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DBD_FillAllScoreCategories();
    
    UFUNCTION(Exec)
    void DBD_DebugSendChatMessage(const FString& msg);
    
    UFUNCTION(Exec)
    void DBD_BuildFromTile(int32 matrixX, int32 matrixY, int32 rotation, const FString& name);
    
    UFUNCTION(Exec)
    void DBD_BuildFromSeed(int32 seed);
    
    UFUNCTION(Exec)
    void DBD_BuildFromPremadeMap(const FString& map);
    
    UFUNCTION(Exec)
    void DBD_BuildFromPlayerCount(int32 count);
    
    UFUNCTION(Exec)
    void DBD_BuildFromMap(const FString& map);
    
    UFUNCTION(Client, Reliable)
    void Client_ValidateServer();
    
    UFUNCTION(Client, Reliable)
    void Client_SendWarning(bool penaltyStarts, float seconds);
    
private:
    UFUNCTION(Client, Reliable, WithValidation)
    void Client_SendServerAuthentication(const FString& authServerTicket, uint64 steamID, uint32 ticketLength);
    
public:
    UFUNCTION(Client, Reliable)
    void Client_SendLogs(const TArray<FString>& ensures);
    
    UFUNCTION(Client, Reliable)
    void Client_RequestPlayerProfile();
    
    UFUNCTION(Client, Reliable)
    void Client_GameEnded();
    
private:
    UFUNCTION(Client, Reliable)
    void Client_FinishedPlaying();
    
public:
    UFUNCTION(Client, Reliable)
    void Client_EACMessageFromServer(const TArray<uint8>& message, uint32 messageLength);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void CallConsoleCmdOnServer_Server(const FString& commandLine);
    
};

