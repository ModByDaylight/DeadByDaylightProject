#pragma once
#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "OnBloodStoreRoleButtonPressedEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBloodStoreRoleButtonPressedEvent, EPlayerRole, role);

