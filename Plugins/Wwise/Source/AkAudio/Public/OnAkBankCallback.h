#pragma once
#include "CoreMinimal.h"
#include "EAkResult.h"
#include "OnAkBankCallback.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAkBankCallback, EAkResult, Result);

