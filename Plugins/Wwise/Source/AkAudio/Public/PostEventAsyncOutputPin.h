#pragma once
#include "CoreMinimal.h"
#include "PostEventAsyncOutputPin.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPostEventAsyncOutputPin, int32, PlayingID);

