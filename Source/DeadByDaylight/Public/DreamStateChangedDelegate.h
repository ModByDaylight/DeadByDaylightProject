#pragma once
#include "CoreMinimal.h"
#include "DreamStateChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDreamStateChangedDelegate, bool, isInDreamworld, bool, locallyObservedChanged);

