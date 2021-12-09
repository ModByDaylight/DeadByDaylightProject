#pragma once
#include "CoreMinimal.h"
#include "EMainMenuButton.generated.h"

UENUM(BlueprintType)
enum class EMainMenuButton : uint8 {
    News,
    PlaySurvivor,
    PlayKiller,
    KillYourFriends,
    DailyRituals,
    Store,
    Settings,
    Onboarding,
    Credits,
    QuitGame,
    Friends,
    Archives,
    CrowdChoice,
    Support,
    PlaySurvivorFromCrowdChoice,
    PlayKillerFromCrowdChoice,
};

