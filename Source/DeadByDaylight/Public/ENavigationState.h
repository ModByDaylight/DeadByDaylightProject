#pragma once
#include "CoreMinimal.h"
#include "ENavigationState.generated.h"

UENUM()
enum class ENavigationState {
    RoleSelection,
    Customization,
    CharacterSelection,
    Lobby,
    BloodStore,
    None,
};

