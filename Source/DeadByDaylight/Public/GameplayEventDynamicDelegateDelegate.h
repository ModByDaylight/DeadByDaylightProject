#pragma once
#include "CoreMinimal.h"
#include "EDBDScoreTypes.h"
#include "GameplayEventDynamicDelegateDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FGameplayEventDynamicDelegate, EDBDScoreTypes, playerGameplayEventType, float, amount, AActor*, effector, AActor*, target);

