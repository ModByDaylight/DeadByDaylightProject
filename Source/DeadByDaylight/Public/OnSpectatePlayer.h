#pragma once
#include "CoreMinimal.h"
#include "OnSpectatePlayer.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpectatePlayer, const FString&, playerName);

