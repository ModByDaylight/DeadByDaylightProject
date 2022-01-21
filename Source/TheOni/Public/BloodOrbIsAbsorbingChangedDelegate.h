#pragma once
#include "CoreMinimal.h"
#include "BloodOrbIsAbsorbingChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBloodOrbIsAbsorbingChangedDelegate, bool, isAbsorbing);

