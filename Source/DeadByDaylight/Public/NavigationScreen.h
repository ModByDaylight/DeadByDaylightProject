#pragma once
#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "NavigationScreen.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UNavigationScreen : public UScreenBase {
    GENERATED_BODY()
public:
    UNavigationScreen();
protected:
    UFUNCTION()
    void OnToggleChatVisibility();
    
    UFUNCTION()
    void OnStartButtonClick();
    
    UFUNCTION()
    void OnSettingsClick();
    
    UFUNCTION()
    void OnSendChatMsgButtonClick(const FString& message);
    
    UFUNCTION()
    void OnReadyButtonClick();
    
    UFUNCTION()
    void OnPlayerOptionSelected(const FString& krakenId, const FString& playerId, uint8 option);
    
    UFUNCTION()
    void OnPlayerInfoClick(int32 playerId);
    
    UFUNCTION()
    void OnMatchManagementButtonClick();
    
    UFUNCTION()
    void OnMatchMakingBanTimeout();
    
    UFUNCTION()
    void OnInviteFriendClick();
    
    UFUNCTION()
    void OnDailyRitualsClick();
    
    UFUNCTION()
    void OnCrowdPlayButtonClick();
    
    UFUNCTION()
    void OnChatInputMouseOver(bool isMouseOver);
    
    UFUNCTION()
    void OnCharacterSwapArrowClick(bool isNext);
    
    UFUNCTION()
    void OnCharacterInfoClick();
    
    UFUNCTION()
    void OnCancelButtonClick();
    
};

