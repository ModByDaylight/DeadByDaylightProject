#pragma once
#include "CoreMinimal.h"
#include "OnAtlantaRequestContentFailedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnAtlantaRequestContentFailed, FText, ErrorText, int32, ErrorCode);

