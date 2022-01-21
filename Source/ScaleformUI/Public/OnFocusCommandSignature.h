#pragma once
#include "CoreMinimal.h"
#include "OnFocusCommandSignature.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFocusCommandSignature, int32, LocalPlayerIndex);

