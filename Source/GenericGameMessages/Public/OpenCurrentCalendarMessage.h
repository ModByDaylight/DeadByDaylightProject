#pragma once
#include "CoreMinimal.h"
#include "OpenCurrentCalendarMessage.generated.h"

USTRUCT()
struct GENERICGAMEMESSAGES_API FOpenCurrentCalendarMessage {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 RemainingDailyRewards;
    
    FOpenCurrentCalendarMessage();
};

