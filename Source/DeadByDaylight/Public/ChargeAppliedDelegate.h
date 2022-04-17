#pragma once
#include "CoreMinimal.h"
#include "ChargeAppliedDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FChargeApplied, float, IndividualChargeAmount, float, TotalChargeAmount, AActor*, ChargeInstigator, bool, WasCoop, float, DeltaTime);

