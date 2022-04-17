#pragma once
#include "CoreMinimal.h"
#include "EAudioCustomizationCategory.h"
#include "CustomizedAudioChangedDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCustomizedAudioChangedDelegate, EAudioCustomizationCategory, category, const FString&, switchState);

