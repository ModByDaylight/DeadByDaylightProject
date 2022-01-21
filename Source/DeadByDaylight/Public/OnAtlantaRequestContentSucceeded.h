#pragma once
#include "CoreMinimal.h"
#include "OnAtlantaRequestContentSucceeded.generated.h"

class UAtlantaPendingContent;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAtlantaRequestContentSucceeded, UAtlantaPendingContent*, MobilePendingContent);

