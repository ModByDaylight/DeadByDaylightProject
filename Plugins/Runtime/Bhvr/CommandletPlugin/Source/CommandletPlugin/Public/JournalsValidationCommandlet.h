#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "JournalsValidationCommandlet.generated.h"

UCLASS(NonTransient)
class UJournalsValidationCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UJournalsValidationCommandlet();
};

