#pragma once
#include "CoreMinimal.h"
#include "PanningRule.generated.h"

UENUM()
enum class PanningRule : uint8 {
    PanningRule_Speakers,
    PanningRule_Headphones,
};

