#pragma once
#include "CoreMinimal.h"
#include "InteractionEndedEventDelegate.generated.h"

class ARespawnableInteractable;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractionEndedEvent, ARespawnableInteractable*, respawnableInteractable);

