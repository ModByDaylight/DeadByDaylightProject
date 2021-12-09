#pragma once
#include "CoreMinimal.h"
#include "EIsInteractionAvailableOnFilter.generated.h"

UENUM()
enum class EIsInteractionAvailableOnFilter : uint8 {
    Self,
    AnyFriend,
};

