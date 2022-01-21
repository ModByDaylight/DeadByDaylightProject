#pragma once
#include "CoreMinimal.h"
#include "EDBDScoreTypes.h"
#include "PlayerGameplayEventDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FPlayerGameplayEventDelegate, EDBDScoreTypes, playerGameplayEventType, float, amount, AActor*, effector, AActor*, target);

