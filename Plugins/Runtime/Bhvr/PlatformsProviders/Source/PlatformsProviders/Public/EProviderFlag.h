#pragma once
#include "CoreMinimal.h"
#include "EProviderFlag.generated.h"

UENUM()
enum class EProviderFlag : uint32 {
    None,
    Google,
    DMM,
    Facebook = 0x4,
    Nintendo = 0x8,
    PSN = 0x10,
    Steam = 0x20,
    WinGDK = 0x40,
    Xbox = 0x80,
    Apple = 0x100,
    Kraken = 0x200,
    Stadia = 0x800,
    GAS3 = 0x4000,
    Epic = 0x8000,
};

