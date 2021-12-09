#pragma once
#include "CoreMinimal.h"
#include "BuyCurrencyMessage.generated.h"

USTRUCT()
struct FBuyCurrencyMessage {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString ItemId;
    
    GENERICGAMEMESSAGES_API FBuyCurrencyMessage();
};

