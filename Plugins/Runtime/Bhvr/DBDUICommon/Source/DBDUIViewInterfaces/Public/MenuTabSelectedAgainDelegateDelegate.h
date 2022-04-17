#pragma once
#include "CoreMinimal.h"
#include "EOnboardingMenuState.h"
#include "MenuTabSelectedAgainDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMenuTabSelectedAgainDelegate, EOnboardingMenuState, selectedTabIndex);

