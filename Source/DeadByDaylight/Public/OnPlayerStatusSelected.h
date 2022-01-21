#pragma once
#include "CoreMinimal.h"
#include "OnPlayerStatusSelected.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerStatusSelected, const FString&, playerName);

