#pragma once
#include "CoreMinimal.h"
#include "EFriendshipStatus.generated.h"

UENUM()
enum class EFriendshipStatus {
    None,
    RequestSent,
    RequestReceived,
    Friend,
};

