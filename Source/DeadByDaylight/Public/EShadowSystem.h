#pragma once
#include "CoreMinimal.h"
#include "EShadowSystem.generated.h"

UENUM()
enum class EShadowSystem : uint8 {
    CascadedShadowMap,
    CacheWholeSceneStaticShadowMap,
    AdaptiveShadowMap,
};

