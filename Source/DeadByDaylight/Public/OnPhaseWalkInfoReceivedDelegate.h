#pragma once
#include "CoreMinimal.h"
#include "PhaseWalkInfo.h"
#include "OnPhaseWalkInfoReceivedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPhaseWalkInfoReceived, const FPhaseWalkInfo&, phaseWalkInfo);

