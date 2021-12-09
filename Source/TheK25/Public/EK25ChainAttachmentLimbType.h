#pragma once
#include "CoreMinimal.h"
#include "EK25ChainAttachmentLimbType.generated.h"

UENUM(BlueprintType)
enum class EK25ChainAttachmentLimbType : uint8 {
    Hand,
    Shoulder,
    Stomach,
    Back,
};

