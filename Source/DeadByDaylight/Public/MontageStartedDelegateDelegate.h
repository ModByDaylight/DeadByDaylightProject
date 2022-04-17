#pragma once
#include "CoreMinimal.h"
#include "AnimationMontageDescriptor.h"
#include "MontageStartedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMontageStartedDelegate, const FAnimationMontageDescriptor, animMontageID, const float, PlayRate);

