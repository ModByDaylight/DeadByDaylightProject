#pragma once
#include "CoreMinimal.h"
#include "OnItemBoolPropertySelectionChanged.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemBoolPropertySelectionChanged, const FString&, PropertySelected);

