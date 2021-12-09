#pragma once
#include "CoreMinimal.h"
#include "ELamentConfigurationDropReason.generated.h"

UENUM()
enum class ELamentConfigurationDropReason {
    SurvivorSolved,
    SurvivorIsNoLongerHostage,
    SurvivorDowned,
    KillerCollect,
    Other,
};

