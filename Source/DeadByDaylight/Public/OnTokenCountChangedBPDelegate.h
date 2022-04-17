#pragma once
#include "CoreMinimal.h"
#include "OnTokenCountChangedBPDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTokenCountChangedBP, int32, tokenCount);

