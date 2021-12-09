#pragma once
#include "CoreMinimal.h"
#include "GameVersionMessage.generated.h"

USTRUCT()
struct FGameVersionMessage {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Version;
    
    GENERICGAMEMESSAGES_API FGameVersionMessage();
};

