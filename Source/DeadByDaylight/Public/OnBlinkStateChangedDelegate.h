#pragma once
#include "CoreMinimal.h"
#include "OnBlinkStateChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBlinkStateChangedDelegate, bool, isInBlinkingState);

