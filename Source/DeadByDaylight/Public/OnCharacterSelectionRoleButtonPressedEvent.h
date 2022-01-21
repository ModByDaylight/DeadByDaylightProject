#pragma once
#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "OnCharacterSelectionRoleButtonPressedEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterSelectionRoleButtonPressedEvent, EPlayerRole, role);

