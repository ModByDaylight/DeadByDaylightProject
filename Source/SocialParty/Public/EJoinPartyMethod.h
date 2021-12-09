#pragma once
#include "CoreMinimal.h"
#include "EJoinPartyMethod.generated.h"

UENUM()
enum class EJoinPartyMethod {
    None,
    PlatformInvitation,
    InGameInvitation,
    JoinRequest,
};

