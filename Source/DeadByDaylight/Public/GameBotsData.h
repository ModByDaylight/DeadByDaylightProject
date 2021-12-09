#pragma once
#include "CoreMinimal.h"
#include "GameBot.h"
#include "GameBotsData.generated.h"

USTRUCT(BlueprintType)
struct FGameBotsData {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FGameBot> _bots;
    
public:
    DEADBYDAYLIGHT_API FGameBotsData();
};

