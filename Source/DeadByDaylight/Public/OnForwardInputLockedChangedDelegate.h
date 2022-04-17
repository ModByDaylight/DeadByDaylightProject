#pragma once
#include "CoreMinimal.h"
#include "OnForwardInputLockedChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnForwardInputLockedChanged, bool, forwardInputLockValue);

