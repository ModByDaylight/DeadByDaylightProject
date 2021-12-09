#pragma once
#include "CoreMinimal.h"
#include "RoleDropdown.h"
#include "CharmDropdown.generated.h"

USTRUCT()
struct FCharmDropdown : public FRoleDropdown {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName CharmId;
    
    DEADBYDAYLIGHT_API FCharmDropdown();
};

