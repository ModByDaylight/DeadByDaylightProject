#pragma once
#include "CoreMinimal.h"
#include "OnChooseLoginProvider.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChooseLoginProvider, const uint8, ProviderId);

