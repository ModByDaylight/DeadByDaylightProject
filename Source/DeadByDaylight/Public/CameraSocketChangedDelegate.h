#pragma once
#include "CoreMinimal.h"
#include "EDBDCameraSocketID.h"
#include "CameraSocketChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCameraSocketChanged, EDBDCameraSocketID, SocketId);

