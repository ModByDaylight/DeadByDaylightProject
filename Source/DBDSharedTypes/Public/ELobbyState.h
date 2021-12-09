#pragma once
#include "CoreMinimal.h"
#include "ELobbyState.generated.h"

UENUM()
enum class ELobbyState {
    Searching,
    Joined,
    Offering,
    Fog,
};

