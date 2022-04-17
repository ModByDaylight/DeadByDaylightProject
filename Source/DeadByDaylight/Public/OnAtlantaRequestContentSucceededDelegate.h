#pragma once
#include "CoreMinimal.h"
#include "OnAtlantaRequestContentSucceededDelegate.generated.h"

class UAtlantaPendingContent;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAtlantaRequestContentSucceeded, UAtlantaPendingContent*, MobilePendingContent);

