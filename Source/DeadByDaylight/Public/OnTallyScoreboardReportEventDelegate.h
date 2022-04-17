#pragma once
#include "CoreMinimal.h"
#include "OnTallyScoreboardReportEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTallyScoreboardReportEvent, const FString&, playerID);

