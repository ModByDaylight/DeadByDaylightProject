#pragma once
#include "CoreMinimal.h"
#include "EGameState.h"
#include "OnPlayerGameStateChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerGameStateChanged, const EGameState, gameState);

