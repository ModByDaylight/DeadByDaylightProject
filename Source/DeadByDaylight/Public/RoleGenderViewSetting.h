#pragma once
#include "CoreMinimal.h"
#include "RoleDropdown.h"
#include "EGender.h"
#include "ScreenshotViewSetting.h"
#include "RoleGenderViewSetting.generated.h"

USTRUCT(BlueprintType)
struct FRoleGenderViewSetting {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName Label;
    
    UPROPERTY(EditAnywhere)
    FRoleDropdown RoleDropdown;
    
    UPROPERTY(EditAnywhere)
    EGender Gender;
    
    UPROPERTY(EditAnywhere)
    FScreenshotViewSetting Settings;
    
    DEADBYDAYLIGHT_API FRoleGenderViewSetting();
};

