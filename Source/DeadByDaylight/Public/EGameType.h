#pragma once
#include "CoreMinimal.h"
#include "EGameType.generated.h"

UENUM(BlueprintType)
enum class EGameType : uint8 {
    Online,
    KillYourFriends,
    SurvivorGroup,
    Tutorial = 0x4,
    TutorialBotMatch,
    SecretBotMatch,
    None,
};

