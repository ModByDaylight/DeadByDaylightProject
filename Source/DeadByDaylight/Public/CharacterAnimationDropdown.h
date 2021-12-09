#pragma once
#include "CoreMinimal.h"
#include "RoleItemCategoryDropdown.h"
#include "CharacterAnimationDropdown.generated.h"

class UAnimationAsset;

USTRUCT()
struct FCharacterAnimationDropdown : public FRoleItemCategoryDropdown {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimationAsset* Animation;
    
    UPROPERTY(EditAnywhere)
    FString AnimationPath;
    
    DEADBYDAYLIGHT_API FCharacterAnimationDropdown();
};

