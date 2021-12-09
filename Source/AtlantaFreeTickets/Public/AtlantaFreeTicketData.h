#pragma once
#include "CoreMinimal.h"
#include "AtlantaFreeTicketData.generated.h"

USTRUCT()
struct FAtlantaFreeTicketData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString TicketId;
    
    UPROPERTY()
    int32 Quantity;
    
    ATLANTAFREETICKETS_API FAtlantaFreeTicketData();
};

