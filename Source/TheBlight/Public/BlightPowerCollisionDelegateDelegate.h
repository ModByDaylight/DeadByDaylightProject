#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BlightPowerCollisionDelegateDelegate.generated.h"

class ADBDPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBlightPowerCollisionDelegate, ADBDPlayer*, collidingPlayer, FVector, collisionLocation, FVector, collisionNormal);

