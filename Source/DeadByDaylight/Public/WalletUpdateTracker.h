#pragma once
#include "CoreMinimal.h"
#include "WalletUpdateTracker.generated.h"

USTRUCT()
struct DEADBYDAYLIGHT_API FWalletUpdateTracker {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<FString, int32> _walletChangeMap;
    
public:
    FWalletUpdateTracker();
};

