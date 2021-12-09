#pragma once
#include "CoreMinimal.h"
#include "EScreenShotBatching.generated.h"

UENUM()
enum class EScreenShotBatching : uint8 {
    SelectedItemOrOutfit,
    SelectedCharacter,
    SelectedCharacterAndCategory,
    ItemsMissingIcon,
    AllItems,
    SelectedCharacterOutfits,
    AllOutfits,
    AllCharms,
};

