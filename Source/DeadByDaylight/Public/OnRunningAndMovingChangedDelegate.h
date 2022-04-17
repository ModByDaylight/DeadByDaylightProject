#pragma once
#include "CoreMinimal.h"
#include "OnRunningAndMovingChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRunningAndMovingChanged, bool, isRunningAndMoving);

