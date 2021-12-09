#pragma once
#include "CoreMinimal.h"
#include "ETallyListPageID.generated.h"

UENUM()
enum class ETallyListPageID : int32 {
    Scoreboard,
    Bloodpoints,
    Rank,
    PlayerLevel,
    CharacterLevel,
    NumberOfPages,
};

