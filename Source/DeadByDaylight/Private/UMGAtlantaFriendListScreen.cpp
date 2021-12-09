#include "UMGAtlantaFriendListScreen.h"

class UExpandableArea;

void UUMGAtlantaFriendListScreen::VerifyReceivedFriendRequestFocus(UExpandableArea* expandableArea, bool bIsExpanded) {
}

void UUMGAtlantaFriendListScreen::OnFinishedOutAnimation() {
}

void UUMGAtlantaFriendListScreen::HandleTabButtonClicked(uint8 tabIndex) {
}

void UUMGAtlantaFriendListScreen::HandleSearchInputChanged(const FText& inputText) {
}

void UUMGAtlantaFriendListScreen::HandleSearchButtonClicked() {
}

void UUMGAtlantaFriendListScreen::HandleOnActionOnFriend(const FActionOnFriend& actionOnFriend) {
}

void UUMGAtlantaFriendListScreen::HandleContextualMenuAction(EActionOnFriendType action) {
}

void UUMGAtlantaFriendListScreen::HandleCloseButtonClicked() {
}

UUMGAtlantaFriendListScreen::UUMGAtlantaFriendListScreen() {
    this->ListSwitcher = NULL;
    this->SearchResultSwitcher = NULL;
    this->NonFriendSearchResult = NULL;
    this->RequestReceivedSearchResult = NULL;
    this->RequestSentSearchResult = NULL;
    this->FriendSearchResult = NULL;
    this->SearchFailureText = NULL;
    this->CloseButton = NULL;
    this->SearchBar = NULL;
    this->ButtonTabContainer = NULL;
    this->FriendListTabWidget = NULL;
    this->SuggestionListTabWidget = NULL;
    this->RequestListTabWidget = NULL;
    this->FriendsTabButton = NULL;
    this->SuggestionsTabButton = NULL;
    this->RequestsTabButton = NULL;
    this->CurrentContextualMenuWidget = NULL;
}

