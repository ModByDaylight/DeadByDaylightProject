#pragma once
#include "CoreMinimal.h"
#include "EKillerMoodInfluence.generated.h"

UENUM(BlueprintType)
enum class EKillerMoodInfluence : uint8 {
    VE_None,
    VE_Chuckles,
    VE_Banshee,
    VE_Hillbilly,
    VE_Nurse,
    VE_Shape,
    VE_MAX UMETA(Hidden),
};

