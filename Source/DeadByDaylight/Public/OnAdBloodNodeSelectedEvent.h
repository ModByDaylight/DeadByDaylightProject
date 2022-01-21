#pragma once
#include "CoreMinimal.h"
#include "OnAdBloodNodeSelectedEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAdBloodNodeSelectedEvent, int32, characterId, int32, nodeId, int32, nodeDepth);

