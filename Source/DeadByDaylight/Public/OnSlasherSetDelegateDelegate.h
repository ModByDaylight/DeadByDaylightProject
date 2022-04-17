#pragma once
#include "CoreMinimal.h"
#include "OnSlasherSetDelegateDelegate.generated.h"

class ASlasherPlayer;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSlasherSetDelegate, ASlasherPlayer*, slasher);

