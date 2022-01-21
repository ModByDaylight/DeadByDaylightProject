#pragma once
#include "CoreMinimal.h"
#include "OnItemPropertySelectionChanged.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemPropertySelectionChanged, const FString&, PropertySelected);

