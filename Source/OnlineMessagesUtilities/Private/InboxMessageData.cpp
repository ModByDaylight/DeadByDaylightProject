#include "InboxMessageData.h"

FInboxMessageData::FInboxMessageData() {
    this->Id = 0;
    this->ReceivedTimestamp = 0;
    this->AreRewardsClaimed = false;
    this->IsRead = false;
    this->ExpireTimestamp = 0;
}

