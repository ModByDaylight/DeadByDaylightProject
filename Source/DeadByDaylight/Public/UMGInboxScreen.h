#pragma once
#include "CoreMinimal.h"
#include "EInboxMessageUIType.h"
#include "MobileBaseUserWidget.h"
#include "InboxMessageUIData.h"
#include "EInboxScreenButton.h"
#include "UMGInboxScreen.generated.h"

class UPanelWidget;
class UUMGInboxMessageEntryWidget;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGInboxScreen : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
    UUMGInboxScreen();
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateMessagesCount(EInboxMessageUIType messageType, int32 unclaimedCount, int32 unreadCount, int32 totalCount);
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateMessage(const FInboxMessageUIData& message);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetSocialMessages(const TArray<FInboxMessageUIData>& messages, int32 unreadCount, int32 totalCount);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetRewardsMessages(const TArray<FInboxMessageUIData>& messages, int32 unclaimedCount, int32 unreadCount, int32 totalCount);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetNewsMessages(const TArray<FInboxMessageUIData>& messages, int32 unreadCount, int32 totalCount);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool RemoveMessageFromPanel(UPanelWidget* containingPanel, const FString& messageId, bool hasSeparator);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void RemoveMessage(const FString& messageId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReadMessageEvent(const FString& messageId);
    
    UFUNCTION(BlueprintCallable)
    void ReadAllMessagesEvent(EInboxMessageUIType messageType);
    
    UFUNCTION(BlueprintCallable)
    int32 FindWidgetIndexByMessageId(UPanelWidget* containingPanel, const FString& messageId);
    
    UFUNCTION(BlueprintCallable)
    UUMGInboxMessageEntryWidget* FindMessageWidgetById(UPanelWidget* containingPanel, const FString& messageId);
    
    UFUNCTION(BlueprintCallable)
    void CleanMessageEvent(const FString& messageId);
    
    UFUNCTION(BlueprintCallable)
    void CleanAllMessagesEvent(EInboxMessageUIType messageType);
    
    UFUNCTION(BlueprintCallable)
    void ClaimMessageEvent(const FString& messageId);
    
    UFUNCTION(BlueprintCallable)
    void ClaimAllMessagesEvent(EInboxMessageUIType messageType);
    
    UFUNCTION(BlueprintCallable)
    void ButtonClickEvent(EInboxScreenButton buttonid);
    
};

