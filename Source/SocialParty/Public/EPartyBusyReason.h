#pragma once
#include "CoreMinimal.h"
#include "EPartyBusyReason.generated.h"

UENUM()
enum class EPartyBusyReason {
    None,
    CreatingParty,
    LeavingParty,
    SyncingParty,
    DestroyingParty,
    InvitingPlayer,
    AcceptingPartyInvite,
    RejectingPartyInvite,
    CancelingPartyInvite,
    RequestingJoinParty,
    AcceptingRequestJoinParty,
    RejectingRequestJoinParty,
    CancelingRequestJoinParty,
    AcceptingPlatformInvite,
    KickingPlayerFromParty,
    LeavingPartyFromKick,
    CreatingPartyPlatformSession,
    LeavingCrossplatformPlatformSession,
    WaitingForPlatformSessionInfo,
    ProcessingPlatformSession,
};

