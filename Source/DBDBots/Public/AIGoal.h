#pragma once
#include "CoreMinimal.h"
#include "AIGoal.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FAIGoal {
    GENERATED_BODY()
public:
    UPROPERTY()
    UObject* Source;
    
    UPROPERTY()
    UObject* MetaGoal;
    
    UPROPERTY()
    UObject* Goal;
    
    DBDBOTS_API FAIGoal();
};

