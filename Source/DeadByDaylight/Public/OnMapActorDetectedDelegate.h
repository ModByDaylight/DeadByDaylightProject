#pragma once
#include "CoreMinimal.h"
#include "OnMapActorDetectedDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMapActorDetected, AActor*, actor);

