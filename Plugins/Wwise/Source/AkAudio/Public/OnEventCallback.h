#pragma once
#include "CoreMinimal.h"
#include "AkWaapiSubscriptionId.h"
#include "AKWaapiJsonObject.h"
#include "OnEventCallback.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnEventCallback, FAkWaapiSubscriptionId, SubscriptionId, FAKWaapiJsonObject, WaapiJsonObject);

