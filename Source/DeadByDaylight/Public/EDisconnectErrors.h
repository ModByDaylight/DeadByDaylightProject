#pragma once
#include "CoreMinimal.h"
#include "EDisconnectErrors.generated.h"

UENUM()
enum class EDisconnectErrors : uint8 {
    None,
    SteamAuthFailure,
    SteamAuthFailureKickedFromServer,
    EACServerValidationFailure,
    EACValidationFailureKickedFromServer,
    EACClientNotRunning,
    EACClientIntegrityViolation,
    PlayerRemovedOnSuspend,
    LostConnectionToHost,
    LostConnectionToProfileService,
    MirrorsUnscheduledSessionDestruction,
    SessionKilledByMirrors,
    UnableToSaveProfileAfterRetries,
    UnableToGetPlayerLevel,
    UnableToEarnPlayerXp,
    UnableToUpdatePips,
    UnableToUpdateRatings,
    ClientProviderAuthenticationFailed,
    UnableToSyncCachedCurrency,
    OwnershipValidationFailure,
};

