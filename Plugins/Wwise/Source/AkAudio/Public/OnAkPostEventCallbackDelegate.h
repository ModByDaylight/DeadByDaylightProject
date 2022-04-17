#pragma once
#include "CoreMinimal.h"
#include "EAkCallbackType.h"
#include "OnAkPostEventCallbackDelegate.generated.h"

class UAkCallbackInfo;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnAkPostEventCallback, EAkCallbackType, CallbackType, UAkCallbackInfo*, CallbackInfo);

