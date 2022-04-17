#pragma once
#include "CoreMinimal.h"
#include "TweenCompletedDelegate.generated.h"

class UUITweenInstance;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTweenCompleted, UUITweenInstance*, tween);

