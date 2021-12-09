#include "UMGBaseFriendListElement.h"

void UUMGBaseFriendListElement::TriggerActionOnThisFriend(EActionOnFriendType actionType) {
}

UUMGBaseFriendListElement::UUMGBaseFriendListElement() {
    this->StatusPicture = NULL;
    this->FriendName = NULL;
    this->FriendStatus = NULL;
    this->SelectionHighlight = NULL;
    this->ItemSelectionBaseButton = NULL;
    this->ContextualMenuPosition = NULL;
    this->FriendUIStatusDataTable = NULL;
}

