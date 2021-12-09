#pragma once
#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "EGameType.h"
#include "GameInfoEventData.generated.h"

USTRUCT()
struct FGameInfoEventData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    EPlayerRole PlayerRole;
    
    UPROPERTY(Transient)
    EGameType GameType;
    
    DEADBYDAYLIGHT_API FGameInfoEventData();
};

