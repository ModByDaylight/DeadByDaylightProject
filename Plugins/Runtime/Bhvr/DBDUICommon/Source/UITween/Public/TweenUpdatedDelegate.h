#pragma once
#include "CoreMinimal.h"
#include "TweenUpdatedDelegate.generated.h"

class UUITweenInstance;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTweenUpdated, UUITweenInstance*, tween);

