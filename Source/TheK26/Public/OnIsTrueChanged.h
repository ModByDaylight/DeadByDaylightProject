#pragma once
#include "CoreMinimal.h"
#include "OnIsTrueChanged.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsTrueChanged, bool, isTrue);

