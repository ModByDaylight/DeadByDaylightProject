#pragma once
#include "CoreMinimal.h"
#include "GeneratorRepairedBySurvivorEvent.generated.h"

class ADBDPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGeneratorRepairedBySurvivorEvent, ADBDPlayer*, repairingSurvivor);

