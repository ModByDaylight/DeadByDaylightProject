#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RecentGameEventTracker.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API URecentGameEventTracker : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    URecentGameEventTracker();
};

