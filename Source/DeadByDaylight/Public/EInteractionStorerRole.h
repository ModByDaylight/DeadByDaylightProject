#pragma once
#include "CoreMinimal.h"
#include "EInteractionStorerRole.generated.h"

UENUM()
enum class EInteractionStorerRole {
    None,
    AuthorityAndAutonomousProxy,
    ClientAndAutonomousProxy,
    AuthorityAndSimulatedProxy,
    ClientAndSimulatedProxy,
};

