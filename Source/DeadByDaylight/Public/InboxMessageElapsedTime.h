#pragma once
#include "CoreMinimal.h"
#include "EInboxMessageTimeUnit.h"
#include "InboxMessageElapsedTime.generated.h"

USTRUCT(BlueprintType)
struct FInboxMessageElapsedTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 ElapsedTime;
    
    UPROPERTY(BlueprintReadOnly)
    EInboxMessageTimeUnit TimeUnit;
    
    DEADBYDAYLIGHT_API FInboxMessageElapsedTime();
};

