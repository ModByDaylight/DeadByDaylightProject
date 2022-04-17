#pragma once
#include "CoreMinimal.h"
#include "OnDreamworldComponentSetDelegate.generated.h"

class ADBDPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDreamworldComponentSet, ADBDPlayer*, player);

