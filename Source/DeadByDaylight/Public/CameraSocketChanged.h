#pragma once
#include "CoreMinimal.h"
#include "EDBDCameraSocketID.h"
#include "CameraSocketChanged.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCameraSocketChanged, EDBDCameraSocketID, SocketId);

