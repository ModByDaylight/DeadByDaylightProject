#pragma once
#include "CoreMinimal.h"
#include "OnPalletStunned_Authority.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPalletStunned_Authority, AActor*, instigator);

