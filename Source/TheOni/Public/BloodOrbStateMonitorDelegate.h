#pragma once
#include "CoreMinimal.h"
#include "BloodOrbStateMonitorDelegate.generated.h"

class ABloodOrb;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBloodOrbStateMonitorDelegate, ABloodOrb*, bloodOrb);

