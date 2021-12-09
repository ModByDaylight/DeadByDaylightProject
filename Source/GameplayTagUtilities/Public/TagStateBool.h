#pragma once
#include "CoreMinimal.h"
#include "TagStateBool.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYTAGUTILITIES_API FTagStateBool {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    bool _isTrue;
    
public:
    FTagStateBool();
};

