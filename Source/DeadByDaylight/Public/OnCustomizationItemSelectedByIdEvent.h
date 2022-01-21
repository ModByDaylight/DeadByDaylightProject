#pragma once
#include "CoreMinimal.h"
#include "OnCustomizationItemSelectedByIdEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCustomizationItemSelectedByIdEvent, const FString&, itemId);

