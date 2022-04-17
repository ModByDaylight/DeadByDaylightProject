#pragma once
#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "OnCharacterSelectionRoleButtonPressedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterSelectionRoleButtonPressedEvent, EPlayerRole, role);

