#pragma once
#include "CoreMinimal.h"
#include "EGameplayMode.h"
#include "OnGameplayModeSelected.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameplayModeSelected, EGameplayMode, mode);

