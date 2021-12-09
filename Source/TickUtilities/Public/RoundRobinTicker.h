#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "RoundRobinTicker.generated.h"

UCLASS()
class TICKUTILITIES_API URoundRobinTicker : public UWorldSubsystem {
    GENERATED_BODY()
public:
    URoundRobinTicker();
};

