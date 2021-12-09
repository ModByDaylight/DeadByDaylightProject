#pragma once
#include "CoreMinimal.h"
#include "EGFxScaleMode.generated.h"

UENUM()
namespace EGFxScaleMode {
    enum Type {
        NoScale,
        ShowAll,
        ExactFit,
        NoBorder,
    };
}

