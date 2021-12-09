#pragma once
#include "CoreMinimal.h"
#include "RoleItemCategoryDropdown.h"
#include "ScreenshotViewSetting.h"
#include "CharacterItemCategoryViewSetting.generated.h"

USTRUCT(BlueprintType)
struct FCharacterItemCategoryViewSetting {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName Label;
    
    UPROPERTY(EditAnywhere)
    FRoleItemCategoryDropdown CharacterDropdown;
    
    UPROPERTY(EditAnywhere)
    FScreenshotViewSetting Settings;
    
    DEADBYDAYLIGHT_API FCharacterItemCategoryViewSetting();
};

