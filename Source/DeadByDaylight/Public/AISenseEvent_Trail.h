#pragma once
#include "CoreMinimal.h"
#include "Perception/AISenseEvent.h"
#include "AITrailEvent.h"
#include "AISenseEvent_Trail.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class DEADBYDAYLIGHT_API UAISenseEvent_Trail : public UAISenseEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAITrailEvent Event;
    
public:
    UAISenseEvent_Trail();
};

