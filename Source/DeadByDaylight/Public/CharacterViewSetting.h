#pragma once
#include "CoreMinimal.h"
#include "CharacterDropdown.h"
#include "ScreenshotViewSetting.h"
#include "CharacterViewSetting.generated.h"

USTRUCT(BlueprintType)
struct FCharacterViewSetting {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName Label;
    
    UPROPERTY(EditAnywhere)
    FCharacterDropdown CharacterDropdown;
    
    UPROPERTY(EditAnywhere)
    FScreenshotViewSetting Settings;
    
    DEADBYDAYLIGHT_API FCharacterViewSetting();
};

