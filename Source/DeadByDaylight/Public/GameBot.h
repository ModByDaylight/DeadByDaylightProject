#pragma once
#include "CoreMinimal.h"
#include "GameBot.generated.h"

USTRUCT(BlueprintType)
struct FGameBot {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    uint8 _role;
    
    UPROPERTY()
    uint8 _difficulty;
    
    UPROPERTY()
    int32 _characterIndex;
    
public:
    DEADBYDAYLIGHT_API FGameBot();
};

