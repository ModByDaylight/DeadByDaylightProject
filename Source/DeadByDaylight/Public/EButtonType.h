#pragma once
#include "CoreMinimal.h"
#include "EButtonType.generated.h"

UENUM(BlueprintType)
enum class EButtonType : uint8 {
    None,
    AttackButton,
    PowerButton,
    CancelButton,
    SettingsButton,
    SecondaryActionButton,
    PowerAttackJoystick,
};

