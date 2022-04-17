#pragma once
#include "CoreMinimal.h"
#include "OnPerkSelectedOnPopupDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPerkSelectedOnPopup, FName, perkID);

