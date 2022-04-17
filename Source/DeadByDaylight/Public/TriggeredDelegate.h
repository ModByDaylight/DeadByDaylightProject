#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TriggeredDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTriggered, AActor*, Instigator, FVector, Location);

