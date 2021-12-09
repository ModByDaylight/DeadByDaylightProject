#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameEventData.h"
#include "OngoingGameEvent.generated.h"

UCLASS()
class UOngoingGameEvent : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FGameEventData _eventData;
    
public:
    UOngoingGameEvent();
};

