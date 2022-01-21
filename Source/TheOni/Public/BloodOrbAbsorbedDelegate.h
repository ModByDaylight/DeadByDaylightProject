#pragma once
#include "CoreMinimal.h"
#include "BloodOrbAbsorbedDelegate.generated.h"

class ABloodOrb;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBloodOrbAbsorbedDelegate, ABloodOrb*, bloodOrb);

