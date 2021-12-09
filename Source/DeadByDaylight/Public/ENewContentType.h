#pragma once
#include "CoreMinimal.h"
#include "ENewContentType.generated.h"

UENUM()
enum class ENewContentType {
    COMING_SOON = 0x1,
    NEW_CONTENT,
    PATCH_NOTES,
    DEV_MESSAGES,
    EVENTS,
};

