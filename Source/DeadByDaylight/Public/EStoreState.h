#pragma once
#include "CoreMinimal.h"
#include "EStoreState.generated.h"

UENUM()
enum class EStoreState {
    None,
    Featured,
    CharacterSelection,
    CharacterStory,
    CharacterCatalog,
    BuyCurrency,
    ShrineOfSecrets,
};

