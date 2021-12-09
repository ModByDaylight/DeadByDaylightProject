#pragma once
#include "CoreMinimal.h"
#include "CustomGameBot.h"
#include "CustomGameBotsData.generated.h"

USTRUCT(BlueprintType)
struct SOCIALPARTY_API FCustomGameBotsData {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FCustomGameBot> _bots;
    
public:
    FCustomGameBotsData();
};

