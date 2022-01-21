#pragma once
#include "CoreMinimal.h"
#include "OnSetCurrentAudioCultureCallback.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSetCurrentAudioCultureCallback, bool, Succeeded);

