#pragma once
#include "CoreMinimal.h"
#include "CustomGameBot.generated.h"

USTRUCT(BlueprintType)
struct SOCIALPARTY_API FCustomGameBot {
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
    FCustomGameBot();
};

