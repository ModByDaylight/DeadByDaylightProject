#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RangeToActorsTrackerStrategy.h"
#include "RangeToActorsTrackerDefaultStrategy.generated.h"

class AActor;

UCLASS(EditInlineNew)
class URangeToActorsTrackerDefaultStrategy : public URangeToActorsTrackerStrategy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AActor> _actorClass;
    
public:
    URangeToActorsTrackerDefaultStrategy();
};

