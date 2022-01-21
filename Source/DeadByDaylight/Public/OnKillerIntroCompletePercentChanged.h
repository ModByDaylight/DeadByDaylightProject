#pragma once
#include "CoreMinimal.h"
#include "OnKillerIntroCompletePercentChanged.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKillerIntroCompletePercentChanged, float, killerIntroCompletePercentChanged);

