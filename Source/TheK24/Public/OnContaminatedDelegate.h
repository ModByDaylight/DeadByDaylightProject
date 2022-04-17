#pragma once
#include "CoreMinimal.h"
#include "EContaminator.h"
#include "OnContaminatedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnContaminated, EContaminator, contaminator);

