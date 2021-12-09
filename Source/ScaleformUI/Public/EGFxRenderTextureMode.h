#pragma once
#include "CoreMinimal.h"
#include "EGFxRenderTextureMode.generated.h"

UENUM()
namespace EGFxRenderTextureMode {
    enum Type {
        Opaque,
        Alpha,
        AlphaComposite,
    };
}

