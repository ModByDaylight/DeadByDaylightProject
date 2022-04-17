#pragma once
#include "CoreMinimal.h"
#include "DBDPlayerControllerBase.h"
#include "PlayerLoadoutData.h"
#include "PlayerDataSync.h"
#include "GamePresetData.h"
#include "DBDPlayerController_Menu.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API ADBDPlayerController_Menu : public ADBDPlayerControllerBase {
    GENERATED_BODY()
public:
    ADBDPlayerController_Menu();
    UFUNCTION()
    void TogglePlayerReadyState();
    
    UFUNCTION()
    void SetPlayerReady(bool isReady);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetReadyToTravel();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetPlayerReady(bool isReady);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetPlayerLoadout(FPlayerLoadoutData desiredLoadout);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetEquipedPerks(const TArray<FName>& perkIds, const TArray<int32>& perkLevels, bool callOnRep);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetCustomizationMeshes(const TArray<FName>& itemIds);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetCustomizationCharm(FName charmId, int8 slotIndex);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetCharacterLevel(int32 characterLevel, int32 prestigeLevel, bool callOnRep);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetCharacterData(int32 characterIndex, const FPlayerDataSync& playerDataSync);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_GamePresetDataFromClient(const FGamePresetData& gameState);
    
    UFUNCTION()
    void Authority_TogglePlayerReadyState();
    
    UFUNCTION()
    void Authority_SetPlayerReady(bool isReady);
    
};

