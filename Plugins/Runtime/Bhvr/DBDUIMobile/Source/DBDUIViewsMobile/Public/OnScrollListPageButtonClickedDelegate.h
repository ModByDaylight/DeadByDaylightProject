#pragma once
#include "CoreMinimal.h"
#include "OnScrollListPageButtonClickedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnScrollListPageButtonClicked, int32, pageIndex);

