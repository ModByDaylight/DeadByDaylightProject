#pragma once
#include "CoreMinimal.h"
#include "OnActorDetected.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActorDetected, AActor*, actor);

