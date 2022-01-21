#pragma once
#include "CoreMinimal.h"
#include "OnVersionDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVersionDelegate, int32, version);

