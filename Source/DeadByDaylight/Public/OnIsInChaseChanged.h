#pragma once
#include "CoreMinimal.h"
#include "OnIsInChaseChanged.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsInChaseChanged, bool, isInChase);

