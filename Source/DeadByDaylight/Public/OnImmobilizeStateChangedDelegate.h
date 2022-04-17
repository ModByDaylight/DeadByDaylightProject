#pragma once
#include "CoreMinimal.h"
#include "ECamperImmobilizeState.h"
#include "OnImmobilizeStateChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnImmobilizeStateChanged, ECamperImmobilizeState, oldState, ECamperImmobilizeState, newState);

