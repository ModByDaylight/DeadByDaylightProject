#pragma once
#include "CoreMinimal.h"
#include "OnHighlightWidgetClickedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHighlightWidgetClicked, FName, onBoardingID);

