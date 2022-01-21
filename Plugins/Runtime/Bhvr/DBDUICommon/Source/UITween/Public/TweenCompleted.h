#pragma once
#include "CoreMinimal.h"
#include "TweenCompleted.generated.h"

class UUITweenInstance;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTweenCompleted, UUITweenInstance*, tween);

