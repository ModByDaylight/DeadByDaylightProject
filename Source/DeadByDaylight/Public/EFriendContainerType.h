#pragma once
#include "CoreMinimal.h"
#include "EFriendContainerType.generated.h"

UENUM()
enum class EFriendContainerType {
    Connected,
    Disconnected,
    PendingSentRequest,
    RecentlyPlayed,
    SocialSuggestions,
    PendingReceivedRequest,
    QueriedPlayer,
    Unknown,
};

