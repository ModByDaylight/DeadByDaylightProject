#pragma once
#include "CoreMinimal.h"
#include "OnItemBoolPropertyDragDetected.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemBoolPropertyDragDetected, const FString&, PropertyDragged);

