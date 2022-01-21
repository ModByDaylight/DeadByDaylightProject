#pragma once
#include "CoreMinimal.h"
#include "PossessDelegate.generated.h"

class APawn;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPossessDelegate, APawn*, pawn);

