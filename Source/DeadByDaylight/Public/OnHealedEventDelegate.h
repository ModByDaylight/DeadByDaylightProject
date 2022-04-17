#pragma once
#include "CoreMinimal.h"
#include "CamperHealResult.h"
#include "OnHealedEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealedEvent, const FCamperHealResult&, healResult);

