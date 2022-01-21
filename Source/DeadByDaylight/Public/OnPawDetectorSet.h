#pragma once
#include "CoreMinimal.h"
#include "OnPawDetectorSet.generated.h"

class UCapsuleComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPawDetectorSet, UCapsuleComponent*, pawnDetector);

