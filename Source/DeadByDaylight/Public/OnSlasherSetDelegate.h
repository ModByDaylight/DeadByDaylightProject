#pragma once
#include "CoreMinimal.h"
#include "OnSlasherSetDelegate.generated.h"

class ASlasherPlayer;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSlasherSetDelegate, ASlasherPlayer*, slasher);

