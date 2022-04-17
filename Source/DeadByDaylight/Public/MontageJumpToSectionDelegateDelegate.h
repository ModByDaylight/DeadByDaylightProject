#pragma once
#include "CoreMinimal.h"
#include "AnimationMontageDescriptor.h"
#include "MontageJumpToSectionDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMontageJumpToSectionDelegate, const FAnimationMontageDescriptor, animMontageID, FName, sectionName);

