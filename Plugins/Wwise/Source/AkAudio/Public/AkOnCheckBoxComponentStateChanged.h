#pragma once
#include "CoreMinimal.h"
#include "AkOnCheckBoxComponentStateChanged.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAkOnCheckBoxComponentStateChanged, bool, bIsChecked);

