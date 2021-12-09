#pragma once
#include "CoreMinimal.h"
#include "CharacterDropdown.h"
#include "ECustomizationCategory.h"
#include "RoleItemCategoryDropdown.generated.h"

USTRUCT()
struct FRoleItemCategoryDropdown : public FCharacterDropdown {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool IncludeOutfits;
    
    UPROPERTY(EditAnywhere)
    bool IncludeNone;
    
    UPROPERTY(EditAnywhere)
    ECustomizationCategory Category;
    
    DEADBYDAYLIGHT_API FRoleItemCategoryDropdown();
};

