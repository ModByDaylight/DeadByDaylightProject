#pragma once
#include "CoreMinimal.h"
#include "PlayerLevelMessage.generated.h"

USTRUCT()
struct FPlayerLevelMessage {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Level;
    
    UPROPERTY(EditAnywhere)
    int32 TotalXp;
    
    GENERICGAMEMESSAGES_API FPlayerLevelMessage();
};

