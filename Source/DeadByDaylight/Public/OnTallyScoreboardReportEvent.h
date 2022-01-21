#pragma once
#include "CoreMinimal.h"
#include "OnTallyScoreboardReportEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTallyScoreboardReportEvent, const FString&, playerID);

