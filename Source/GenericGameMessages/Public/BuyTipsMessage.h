#pragma once
#include "CoreMinimal.h"
#include "BuyTipsMessage.generated.h"

USTRUCT()
struct FBuyTipsMessage {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Result;
    
    GENERICGAMEMESSAGES_API FBuyTipsMessage();
};

