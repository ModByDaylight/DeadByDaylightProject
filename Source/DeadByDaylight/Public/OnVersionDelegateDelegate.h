#pragma once
#include "CoreMinimal.h"
#include "OnVersionDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVersionDelegate, int32, version);

