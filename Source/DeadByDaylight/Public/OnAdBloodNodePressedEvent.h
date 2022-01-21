#pragma once
#include "CoreMinimal.h"
#include "OnAdBloodNodePressedEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAdBloodNodePressedEvent, const FString&, nodeID);

