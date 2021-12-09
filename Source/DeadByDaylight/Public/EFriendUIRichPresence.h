#pragma once
#include "CoreMinimal.h"
#include "EFriendUIRichPresence.generated.h"

UENUM()
enum class EFriendUIRichPresence {
    Undefined,
    InMenus,
    InLobby,
    InMatch,
    Connected,
    Closing,
};

