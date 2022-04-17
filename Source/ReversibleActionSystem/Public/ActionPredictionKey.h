#pragma once
#include "CoreMinimal.h"
#include "ActionPredictionKey.generated.h"

USTRUCT(BlueprintType)
struct REVERSIBLEACTIONSYSTEM_API FActionPredictionKey {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 _keyValue;
    
public:
    FActionPredictionKey();

    friend uint32 GetTypeHash(const FActionPredictionKey& Key)
    {
        return Key._keyValue;
    }
};

