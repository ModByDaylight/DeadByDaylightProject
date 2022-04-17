#pragma once
#include "CoreMinimal.h"
#include "AnimationMontageDescriptor.h"
#include "MontageStoppedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMontageStoppedDelegate, const FAnimationMontageDescriptor, animMontageID);

