#pragma once
#include "CoreMinimal.h"
#include "LoginMessage.generated.h"

USTRUCT()
struct FLoginMessage {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString MirrorsId;
    
    GENERICGAMEMESSAGES_API FLoginMessage();
};

