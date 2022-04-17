#pragma once
#include "CoreMinimal.h"
#include "OnBloodNodePressedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBloodNodePressedEvent, const FString&, nodeID);

