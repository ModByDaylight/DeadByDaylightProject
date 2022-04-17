#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnItemSelectionChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemSelectionChanged, FGuid, ItemSelectedID);

