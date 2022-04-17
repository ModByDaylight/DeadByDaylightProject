#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "FriendWidgetList.h"
#include "ActionOnFriend.h"
#include "EActionOnFriendType.h"
#include "UMGAtlantaFriendListScreen.generated.h"

class UUMGBaseFriendListElement;
class UWidgetSwitcher;
class UTextBlock;
class UUMGFriendListTabWidget;
class UUMGBaseButtonWidget;
class UUMGFriendSearchBarWidget;
class UUMGFriendTabButtonWidget;
class UHorizontalBox;
class UUMGSuggestionsListTabWidget;
class UUMGRequestsListTabWidget;
class UUMGBaseFriendListContextualMenuWidget;
class UExpandableArea;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaFriendListScreen : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UWidgetSwitcher* ListSwitcher;
    
    UPROPERTY(Export)
    UWidgetSwitcher* SearchResultSwitcher;
    
    UPROPERTY(Export)
    UUMGBaseFriendListElement* NonFriendSearchResult;
    
    UPROPERTY(Export)
    UUMGBaseFriendListElement* RequestReceivedSearchResult;
    
    UPROPERTY(Export)
    UUMGBaseFriendListElement* RequestSentSearchResult;
    
    UPROPERTY(Export)
    UUMGBaseFriendListElement* FriendSearchResult;
    
    UPROPERTY(Export)
    UTextBlock* SearchFailureText;
    
    UPROPERTY(Export)
    UUMGBaseButtonWidget* CloseButton;
    
    UPROPERTY(Export)
    UUMGFriendSearchBarWidget* SearchBar;
    
    UPROPERTY(Export)
    UHorizontalBox* ButtonTabContainer;
    
    UPROPERTY(Export)
    UUMGFriendListTabWidget* FriendListTabWidget;
    
    UPROPERTY(Export)
    UUMGSuggestionsListTabWidget* SuggestionListTabWidget;
    
    UPROPERTY(Export)
    UUMGRequestsListTabWidget* RequestListTabWidget;
    
    UPROPERTY(Export)
    UUMGFriendTabButtonWidget* FriendsTabButton;
    
    UPROPERTY(Export)
    UUMGFriendTabButtonWidget* SuggestionsTabButton;
    
    UPROPERTY(Export)
    UUMGFriendTabButtonWidget* RequestsTabButton;
    
    UPROPERTY(Export, Transient)
    UUMGBaseFriendListContextualMenuWidget* CurrentContextualMenuWidget;
    
    UPROPERTY(EditInstanceOnly)
    TSoftClassPtr<UUMGBaseFriendListElement> FriendWidget;
    
    UPROPERTY(EditInstanceOnly)
    TSoftClassPtr<UUMGBaseFriendListElement> RequestSentWidget;
    
    UPROPERTY(EditInstanceOnly)
    TSoftClassPtr<UUMGBaseFriendListElement> FriendRequestReceivedWidget;
    
    UPROPERTY(EditInstanceOnly)
    TSoftClassPtr<UUMGBaseFriendListElement> FriendsSuggestionWidget;
    
    UPROPERTY(EditInstanceOnly)
    TSoftClassPtr<UUMGBaseFriendListElement> FriendsSuggestion;
    
    UPROPERTY(EditInstanceOnly)
    TSoftClassPtr<UUMGBaseFriendListElement> FriendPartyInviteWidgetClass;
    
    UPROPERTY(EditInstanceOnly)
    TSoftClassPtr<UUMGBaseFriendListContextualMenuWidget> ContextualMenuInvite;
    
    UPROPERTY(EditInstanceOnly)
    TSoftClassPtr<UUMGBaseFriendListContextualMenuWidget> ContextualMenuConfirmDeclineAction;
    
private:
    UPROPERTY()
    TMap<FString, FFriendWidgetList> _existingFriendListWidgets;
    
    UPROPERTY(Export)
    TMap<FString, UUMGBaseFriendListElement*> _existingFriendInvitePartyWidget;
    
public:
    UUMGAtlantaFriendListScreen();
private:
    UFUNCTION()
    void VerifyReceivedFriendRequestFocus(UExpandableArea* expandableArea, bool bIsExpanded);
    
    UFUNCTION()
    void OnFinishedOutAnimation();
    
    UFUNCTION()
    void HandleTabButtonClicked(uint8 tabIndex);
    
    UFUNCTION()
    void HandleSearchInputChanged(const FText& inputText);
    
    UFUNCTION()
    void HandleSearchButtonClicked();
    
    UFUNCTION()
    void HandleOnActionOnFriend(const FActionOnFriend& actionOnFriend);
    
    UFUNCTION()
    void HandleContextualMenuAction(EActionOnFriendType action);
    
    UFUNCTION()
    void HandleCloseButtonClicked();
    
};

