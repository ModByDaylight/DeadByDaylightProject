#pragma once
#include "CoreMinimal.h"
#include "OnItemBoolPropertySelectionChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemBoolPropertySelectionChanged, const FString&, PropertySelected);

