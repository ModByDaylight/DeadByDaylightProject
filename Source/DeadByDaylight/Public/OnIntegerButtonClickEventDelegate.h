#pragma once
#include "CoreMinimal.h"
#include "OnIntegerButtonClickEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIntegerButtonClickEvent, int32, index);

