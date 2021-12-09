#pragma once
#include "CoreMinimal.h"
#include "ActivationDefinition.h"
#include "TestableActivationDefinition.generated.h"

USTRUCT()
struct FTestableActivationDefinition : public FActivationDefinition {
    GENERATED_BODY()
public:
    ACTIVATION_API FTestableActivationDefinition();
};

