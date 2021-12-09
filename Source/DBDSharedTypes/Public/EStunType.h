#pragma once
#include "CoreMinimal.h"
#include "EStunType.generated.h"

UENUM()
enum class EStunType : uint8 {
    VE_None,
    VE_Bookshelf,
    VE_BearTrap,
    VE_Flashlight,
    VE_WiggleFree,
    VE_EvilWithin,
    VE_Kicked,
    VE_Closet,
    VE_HarpoonRifle,
    VE_GeneratorTrap,
    VE_MAX UMETA(Hidden),
};

