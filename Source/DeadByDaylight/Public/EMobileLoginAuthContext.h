#pragma once
#include "CoreMinimal.h"
#include "EMobileLoginAuthContext.generated.h"

UENUM()
enum class EMobileLoginAuthContext {
    Splash,
    OverlayMenu,
    ResumeFromSuspend,
};

