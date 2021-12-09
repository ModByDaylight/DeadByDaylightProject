#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "StoryDescriptionValidationCommandlet.generated.h"

UCLASS(NonTransient)
class UStoryDescriptionValidationCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UStoryDescriptionValidationCommandlet();
};

