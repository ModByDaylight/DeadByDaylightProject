#pragma once
#include "CoreMinimal.h"
#include "OnAcquiredChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAcquiredChanged, const bool, acquired);

