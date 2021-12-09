#pragma once
#include "CoreMinimal.h"
#include "EAtlantaFriendUIStatus.generated.h"

UENUM(BlueprintType)
enum class EAtlantaFriendUIStatus : uint8 {
    Undefined,
    FriendSuggestion,
    FriendRequestSent,
    FriendRequestReceived,
    Available,
    InAMatch,
    Offline,
    AddFriendToSeeStatus,
};

