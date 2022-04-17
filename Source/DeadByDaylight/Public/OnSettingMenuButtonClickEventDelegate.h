#pragma once
#include "CoreMinimal.h"
#include "OnSettingMenuButtonClickEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSettingMenuButtonClickEvent, int32, tabIndex);

