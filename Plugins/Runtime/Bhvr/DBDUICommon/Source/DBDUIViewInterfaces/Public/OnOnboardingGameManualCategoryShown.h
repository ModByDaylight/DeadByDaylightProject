#pragma once
#include "CoreMinimal.h"
#include "EHelpType.h"
#include "OnOnboardingGameManualCategoryShown.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOnboardingGameManualCategoryShown, EHelpType, categoryType);

