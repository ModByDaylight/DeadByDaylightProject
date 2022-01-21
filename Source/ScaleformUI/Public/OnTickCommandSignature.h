#pragma once
#include "CoreMinimal.h"
#include "OnTickCommandSignature.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTickCommandSignature, float, DeltaTime);

