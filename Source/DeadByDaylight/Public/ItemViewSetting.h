#pragma once
#include "CoreMinimal.h"
#include "ItemIdDropdown.h"
#include "ScreenshotViewSetting.h"
#include "ItemViewSetting.generated.h"

USTRUCT(BlueprintType)
struct FItemViewSetting {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName Label;
    
    UPROPERTY(EditAnywhere)
    FItemIdDropdown Item;
    
    UPROPERTY(EditAnywhere)
    FScreenshotViewSetting Settings;
    
    DEADBYDAYLIGHT_API FItemViewSetting();
};

