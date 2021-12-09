#pragma once
#include "CoreMinimal.h"
#include "EJoinSessionFailureType.generated.h"

UENUM()
enum class EJoinSessionFailureType {
    None,
    JoiningAlreadyStartedGame,
    JoiningPrivateGame,
    JoiningAlreadyFullGame,
    JoiningInvitation,
    JoiningFailedOnDisconnect,
    JoiningHostUnreachable,
    JoiningIncompatibleServer,
};

