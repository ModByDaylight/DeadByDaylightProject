#pragma once
#include "CoreMinimal.h"
#include "Lock.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FLock {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TWeakObjectPtr<UObject> _lockingObject;
    
public:
    FLock();
};

