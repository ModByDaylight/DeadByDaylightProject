#pragma once
#include "CoreMinimal.h"
#include "OrderDoneMessage.generated.h"

USTRUCT()
struct FOrderDoneMessage {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Code;
    
    UPROPERTY(EditAnywhere)
    FString OrderId;
    
    UPROPERTY(EditAnywhere)
    FString OrderChannel;
    
    GENERICGAMEMESSAGES_API FOrderDoneMessage();
};

