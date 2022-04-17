#pragma once
#include "CoreMinimal.h"
#include "EK26AmmoState.h"
#include "OnCurrentAmmoStateChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCurrentAmmoStateChanged, const EK26AmmoState, newAmmoState, const int32, currentAmmo, const int32, maxAmmo);

