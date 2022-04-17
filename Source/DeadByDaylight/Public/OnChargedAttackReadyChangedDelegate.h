#pragma once
#include "CoreMinimal.h"
#include "OnChargedAttackReadyChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChargedAttackReadyChanged, bool, bIsReady);

