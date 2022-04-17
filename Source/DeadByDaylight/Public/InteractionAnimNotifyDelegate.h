#pragma once
#include "CoreMinimal.h"
#include "InteractionAnimNotifyDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractionAnimNotify, FName, NotifyId);

