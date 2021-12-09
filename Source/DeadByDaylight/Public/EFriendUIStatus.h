#pragma once
#include "CoreMinimal.h"
#include "EFriendUIStatus.generated.h"

UENUM()
enum class EFriendUIStatus {
    Offline,
    Online,
    PlayingDBD,
    PendingSentRequest,
    PendingReceivedRequest,
    NotFriend,
    Self,
};

