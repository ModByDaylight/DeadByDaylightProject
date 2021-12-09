#pragma once
#include "CoreMinimal.h"
#include "EFriendSearchPanelOption.generated.h"

UENUM()
enum class EFriendSearchPanelOption {
    NotFoundPanel,
    NonFriendPanel,
    FriendRequestReceivedPanel,
    FriendRequestSentPanel,
    FriendPanel,
    IsOwnerPanel,
};

