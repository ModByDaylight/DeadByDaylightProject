#pragma once
#include "CoreMinimal.h"
#include "OnRoleSwitcherReleasedDelegate.generated.h"

class UUMGRoleSwitcherWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRoleSwitcherReleased, UUMGRoleSwitcherWidget*, switcher);

