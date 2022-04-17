#pragma once
#include "CoreMinimal.h"
#include "OnChooseLoginProviderDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChooseLoginProvider, const uint8, ProviderId);

