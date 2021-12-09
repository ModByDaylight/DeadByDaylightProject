#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MatchHistorySubsystem.generated.h"

UCLASS()
class MATCHHISTORY_API UMatchHistorySubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UMatchHistorySubsystem();
};

