#pragma once
#include "CoreMinimal.h"
#include "OnTextInputEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTextInputEvent, const FText&, textValue);

