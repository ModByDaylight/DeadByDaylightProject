#pragma once
#include "CoreMinimal.h"
#include "OnBoolPropertyDropDetected.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBoolPropertyDropDetected, const FString&, PropertyDropped);

