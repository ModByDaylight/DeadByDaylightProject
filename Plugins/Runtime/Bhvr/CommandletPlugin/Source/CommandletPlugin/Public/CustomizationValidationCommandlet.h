#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "CustomizationValidationCommandlet.generated.h"

UCLASS(NonTransient)
class UCustomizationValidationCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UCustomizationValidationCommandlet();
};

