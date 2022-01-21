#pragma once
#include "CoreMinimal.h"
#include "OnSetOnboardingMenuSubtitleDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSetOnboardingMenuSubtitleDelegate, FText, subtitle);

