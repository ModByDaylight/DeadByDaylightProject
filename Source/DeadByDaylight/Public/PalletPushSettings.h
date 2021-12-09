#pragma once
#include "CoreMinimal.h"
#include "EPalletPushSideStrategy.h"
#include "PalletPushSettings.generated.h"

USTRUCT(BlueprintType)
struct FPalletPushSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IgnorePlayerExecutingPulldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPalletPushSideStrategy PalletPushSideStrategy;
    
    DEADBYDAYLIGHT_API FPalletPushSettings();
};

