#pragma once
#include "CoreMinimal.h"
#include "EOnboardingMenuState.h"
#include "MenuTabSelectedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMenuTabSelectedDelegate, EOnboardingMenuState, selectedTabIndex);

