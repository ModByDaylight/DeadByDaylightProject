#pragma once
#include "CoreMinimal.h"
#include "OnLegalMenuButtonClickEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLegalMenuButtonClickEvent, bool, isAccept);

