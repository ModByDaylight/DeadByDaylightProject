#pragma once
#include "CoreMinimal.h"
#include "OnIsTrueChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsTrueChanged, bool, isTrue);

