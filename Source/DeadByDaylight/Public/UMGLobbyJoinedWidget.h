#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "PlayerReadyStatusData.h"
#include "PlayerInfoData.h"
#include "InventorySlotData.h"
#include "UMGLobbyJoinedWidget.generated.h"

class UHorizontalBox;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGLobbyJoinedWidget : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool LocalPlayerIsSlasher;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    FText TextLeaveLobby;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText TextPlayerNotReadyYet;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText TextWaitingPlayers;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText TextToBeReady;
    
    UPROPERTY(Export)
    UHorizontalBox* CommandButtonsContainer;
    
public:
    UUMGLobbyJoinedWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void UpdatePlayersLatency(const TMap<int32, float>& playersLatency, bool isHost);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWidgetsVisibility(const bool widgetsVisibilty);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void SetReadyStatus(const TArray<FPlayerReadyStatusData>& playersReadyStatusData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetLocalPlayerInfo(const FPlayerInfoData& playerInfoData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetLobbyTimer(int32 seconds);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetLoadoutDataForLocalPlayer(const TArray<FInventorySlotData>& loadoutData, bool usingMatchRules, bool perkSlotsLockedByAdmin, bool isSlasher);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RemovePlayersInfo(int32 playerId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleLeaveButtonClicked();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void AddPlayerInfo(int32 playerId, const FPlayerInfoData& playerInfoData, bool isPlayerReady, const TArray<FInventorySlotData>& loadoutData);
    
};

