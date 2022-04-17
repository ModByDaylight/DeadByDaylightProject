#pragma once
#include "CoreMinimal.h"
#include "BloodOrbIsAbsorbingChangedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBloodOrbIsAbsorbingChangedDelegate, bool, isAbsorbing);

