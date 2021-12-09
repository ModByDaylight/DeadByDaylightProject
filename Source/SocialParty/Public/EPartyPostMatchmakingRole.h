#pragma once
#include "CoreMinimal.h"
#include "EPartyPostMatchmakingRole.generated.h"

UENUM()
enum class EPartyPostMatchmakingRole : uint8 {
    None,
    Client,
    Host,
};

