#pragma once
#include "CoreMinimal.h"
#include "ECustomMatchTab.generated.h"

UENUM()
enum class ECustomMatchTab : uint8 {
    Perks,
    ItemsAndAddons,
    Offerings,
    Maps,
    BotDifficulty,
    BotCharacter,
    Count,
};

