#pragma once
#include "CoreMinimal.h"
#include "OnNameInputOnPopupDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNameInputOnPopup, const FString&, name);

