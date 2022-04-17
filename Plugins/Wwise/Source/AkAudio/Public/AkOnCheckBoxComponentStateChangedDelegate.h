#pragma once
#include "CoreMinimal.h"
#include "AkOnCheckBoxComponentStateChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAkOnCheckBoxComponentStateChanged, bool, bIsChecked);

