#pragma once
#include "CoreMinimal.h"
#include "ScreenshotViewSetting.h"
#include "ECharmCategory.h"
#include "CharmCategorySetting.generated.h"

USTRUCT(BlueprintType)
struct FCharmCategorySetting {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName Label;
    
    UPROPERTY(EditAnywhere)
    ECharmCategory CharmCategory;
    
    UPROPERTY(EditAnywhere)
    FScreenshotViewSetting Settings;
    
    DEADBYDAYLIGHT_API FCharmCategorySetting();
};

