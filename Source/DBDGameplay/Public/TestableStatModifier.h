#pragma once
#include "CoreMinimal.h"
#include "StatModifier.h"
#include "TestableStatModifier.generated.h"

USTRUCT()
struct FTestableStatModifier : public FStatModifier {
    GENERATED_BODY()
public:
    DBDGAMEPLAY_API FTestableStatModifier();
};

