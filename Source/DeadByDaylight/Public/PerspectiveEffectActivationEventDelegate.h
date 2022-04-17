#pragma once
#include "CoreMinimal.h"
#include "PerspectiveEffectActivationEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FPerspectiveEffectActivationEvent, bool, isActive);

