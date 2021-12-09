#pragma once
#include "CoreMinimal.h"
#include "CharmDropdown.h"
#include "ScreenshotViewSetting.h"
#include "CharmViewSetting.generated.h"

USTRUCT(BlueprintType)
struct FCharmViewSetting {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName Label;
    
    UPROPERTY(EditAnywhere)
    FCharmDropdown CharmID;
    
    UPROPERTY(EditAnywhere)
    FScreenshotViewSetting Settings;
    
    DEADBYDAYLIGHT_API FCharmViewSetting();
};

