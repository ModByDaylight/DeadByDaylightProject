#pragma once
#include "CoreMinimal.h"
#include "OnSurvivorStatusIndicatorSetDelegate.generated.h"

class ACamperPlayer;
class AK26AttachedCrow;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSurvivorStatusIndicatorSet, const ACamperPlayer*, survivor, AK26AttachedCrow*, statusIndicator);

