#pragma once
#include "CoreMinimal.h"
#include "EPlatformFlag.generated.h"

UENUM()
enum class EPlatformFlag : uint32 {
    None,
    Android,
    DMM,
    IOS = 0x4,
    Switch = 0x8,
    PS4 = 0x10,
    Steam = 0x20,
    WinGDK = 0x40,
    Xbox = 0x80,
    Stadia = 0x200,
    PS5 = 0x400,
    XSX = 0x800,
    Epic = 0x1000,
};

