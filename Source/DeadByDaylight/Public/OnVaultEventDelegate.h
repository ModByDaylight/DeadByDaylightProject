#pragma once
#include "CoreMinimal.h"
#include "OnVaultEventDelegate.generated.h"

class ADBDPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVaultEvent, ADBDPlayer*, vaulter);

