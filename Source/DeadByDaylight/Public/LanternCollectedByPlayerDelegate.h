#pragma once
#include "CoreMinimal.h"
#include "LanternCollectedByPlayerDelegate.generated.h"

class ADBDPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLanternCollectedByPlayerDelegate, ADBDPlayer*, player);

