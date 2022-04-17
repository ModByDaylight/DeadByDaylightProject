#pragma once
#include "CoreMinimal.h"
#include "EKeyBindingsType.generated.h"

UENUM()
enum class EKeyBindingsType {
    None = -0x1,
    Run,
    Crouch,
    UseItem,
    DropItemSurvivor,
    PickUpItem,
    ActionSurvivor,
    SecondaryActionSurvivor,
    AbilitySurvivor,
    Gesture1,
    Gesture2,
    WiggleRightSkillCheck,
    WiggleLeftSkillCheck,
    Attack,
    Power,
    SecondaryPower,
    DropSurvivor,
    PickUp,
    Forward,
    Back,
    Left,
    Right,
    Aim,
    CameraUp,
    CameraDown,
    CameraLeft,
    CameraRight,
};

