#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "GameEventMulticastDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGameEventMulticastDelegate, const FGameplayTag, gameEventType, const FGameEventData&, gameEventData);

