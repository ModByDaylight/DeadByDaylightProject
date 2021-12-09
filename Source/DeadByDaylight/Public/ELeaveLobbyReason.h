#pragma once
#include "CoreMinimal.h"
#include "ELeaveLobbyReason.generated.h"

UENUM()
enum class ELeaveLobbyReason {
    eNone,
    eNetworkDisconnect,
    eProfileOffline,
    eAppSuspended,
    eInternetDisconnect,
    eHostDisconnect,
    eDLCInstalled,
    eTrialExtensionExpired,
    ePartyManagementError,
};

