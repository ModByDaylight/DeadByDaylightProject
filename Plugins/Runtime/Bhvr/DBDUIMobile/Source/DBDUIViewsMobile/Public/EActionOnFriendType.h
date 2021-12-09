#pragma once
#include "CoreMinimal.h"
#include "EActionOnFriendType.generated.h"

UENUM()
enum class EActionOnFriendType : uint8 {
    None,
    SendFriendRequest,
    ConfirmFriendRequest,
    DeclineFriendRequest,
    RemoveFriend,
    AddToFavorite,
    RemoveToFavorite,
    Mute,
    Unmute,
    InviteToParty,
    CancelInviteToParty,
    Select,
    ConfirmAction,
    DeclineAction,
    RemovePlayerFromParty,
    Count,
};

