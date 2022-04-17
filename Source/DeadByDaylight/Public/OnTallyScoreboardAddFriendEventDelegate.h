#pragma once
#include "CoreMinimal.h"
#include "OnTallyScoreboardAddFriendEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTallyScoreboardAddFriendEvent, const FString&, playerID);

