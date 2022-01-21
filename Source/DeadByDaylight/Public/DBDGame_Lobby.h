#pragma once
#include "CoreMinimal.h"
#include "DBDBaseGameMode.h"
#include "DBDGame_Lobby.generated.h"

class UIdentityValidation;

UCLASS(NonTransient)
class DEADBYDAYLIGHT_API ADBDGame_Lobby : public ADBDBaseGameMode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UIdentityValidation* _identityValidation;
    
public:
    ADBDGame_Lobby();
    UFUNCTION(Exec)
    void DBD_RemoveBotByIndex(int32 botIndex);
    
    UFUNCTION(Exec)
    void DBD_FillLobbyWithBotsByName(const FString& selectedKiller, int32 rank);
    
    UFUNCTION(Exec)
    void DBD_FillLobby();
    
    UFUNCTION(Exec)
    void DBD_AddBotToLobbyNoLoadoutByName(const FString& selectedCharacter);
    
    UFUNCTION(Exec)
    void DBD_AddBotToLobbyNoLoadout(int32 selectedCharacter);
    
    UFUNCTION(Exec)
    void DBD_AddBotToLobbyByName(const FString& selectedCharacter, const FString& item, const FString& addon1, const FString& addon2, const FString& offering, const FString& perk1, const FString& perk2, const FString& perk3, const FString& perk4, int32 rank);
    
    UFUNCTION(Exec)
    void DBD_AddBotToLobby(int32 selectedCharacter, const FString& item, const FString& addon1, const FString& addon2, const FString& offering, const FString& perk1, const FString& perk2, const FString& perk3, const FString& perk4, int32 rank);
    
};

