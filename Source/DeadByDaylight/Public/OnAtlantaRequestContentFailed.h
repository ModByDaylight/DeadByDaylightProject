#pragma once
#include "CoreMinimal.h"
#include "OnAtlantaRequestContentFailed.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnAtlantaRequestContentFailed, FText, ErrorText, int32, ErrorCode);

