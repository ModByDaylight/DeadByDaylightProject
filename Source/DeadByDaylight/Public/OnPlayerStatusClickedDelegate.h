#pragma once
#include "CoreMinimal.h"
#include "OnPlayerStatusClickedDelegate.generated.h"

class UUMGPlayerStatusIcon;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerStatusClicked, UUMGPlayerStatusIcon*, playerStatusIcon);

