#pragma once
#include "CoreMinimal.h"
#include "IsInteractingChangedEvent.generated.h"

class ARespawnableInteractable;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIsInteractingChangedEvent, ARespawnableInteractable*, respawnableInteractable, bool, isInteracting);

