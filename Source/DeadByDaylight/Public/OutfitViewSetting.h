#pragma once
#include "CoreMinimal.h"
#include "OutfitDropdown.h"
#include "ScreenshotViewSetting.h"
#include "OutfitViewSetting.generated.h"

USTRUCT(BlueprintType)
struct FOutfitViewSetting {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName Label;
    
    UPROPERTY(EditAnywhere)
    FOutfitDropdown OutfitDropdown;
    
    UPROPERTY(EditAnywhere)
    FScreenshotViewSetting Settings;
    
    DEADBYDAYLIGHT_API FOutfitViewSetting();
};

