#pragma once
#include "CoreMinimal.h"
#include "OnFadePercentChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFadePercentChangedDelegate, float, fadePercent);

