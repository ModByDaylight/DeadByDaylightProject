#pragma once
#include "CoreMinimal.h"
#include "Perception/AISenseEvent.h"
#include "AITerrorEvent.h"
#include "AISenseEvent_Terror.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class DEADBYDAYLIGHT_API UAISenseEvent_Terror : public UAISenseEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAITerrorEvent Event;
    
public:
    UAISenseEvent_Terror();
};

