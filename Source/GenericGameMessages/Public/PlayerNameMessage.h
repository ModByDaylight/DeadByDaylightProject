#pragma once
#include "CoreMinimal.h"
#include "PlayerNameMessage.generated.h"

USTRUCT()
struct FPlayerNameMessage {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Name;
    
    GENERICGAMEMESSAGES_API FPlayerNameMessage();
};

