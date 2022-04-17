#pragma once
#include "CoreMinimal.h"
#include "OnFirstPersonModeChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFirstPersonModeChanged, bool, firstPerson);

