#pragma once
#include "CoreMinimal.h"
#include "FearMarketOfferingInstance.h"
#include "FearMarketDataReceivedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFearMarketDataReceivedDelegate, bool, success, FFearMarketOfferingInstance, newOfferings);

