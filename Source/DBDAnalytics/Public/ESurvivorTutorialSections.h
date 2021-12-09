#pragma once
#include "CoreMinimal.h"
#include "ESurvivorTutorialSections.generated.h"

UENUM()
enum class ESurvivorTutorialSections : uint8 {
    Intro,
    Skillchecks,
    Killer,
    Stealth,
    Hook,
    Health,
    Rescue,
    Escape,
};

