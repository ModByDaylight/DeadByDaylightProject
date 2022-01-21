#pragma once
#include "CoreMinimal.h"
#include "OnBloodNodePressedEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBloodNodePressedEvent, const FString&, nodeID);

