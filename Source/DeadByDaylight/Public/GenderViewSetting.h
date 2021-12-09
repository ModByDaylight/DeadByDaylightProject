#pragma once
#include "CoreMinimal.h"
#include "RoleItemCategoryDropdown.h"
#include "EGender.h"
#include "ScreenshotViewSetting.h"
#include "GenderViewSetting.generated.h"

USTRUCT(BlueprintType)
struct FGenderViewSetting {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRoleItemCategoryDropdown RoleItemCategory;
    
    UPROPERTY(EditAnywhere)
    EGender Gender;
    
    UPROPERTY(EditAnywhere)
    FScreenshotViewSetting Settings;
    
    DEADBYDAYLIGHT_API FGenderViewSetting();
};

