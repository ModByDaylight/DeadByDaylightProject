#pragma once
#include "CoreMinimal.h"
#include "OnVaultEvent.generated.h"

class ADBDPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVaultEvent, ADBDPlayer*, vaulter);

