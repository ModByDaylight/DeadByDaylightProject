#pragma once
#include "CoreMinimal.h"
#include "AtlantaFreeTicketCatalogItem.generated.h"

USTRUCT()
struct ATLANTAFREETICKETS_API FAtlantaFreeTicketCatalogItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString TicketId;
    
    UPROPERTY()
    FString Role;
    
    UPROPERTY()
    int32 DurationInMinutes;
    
    FAtlantaFreeTicketCatalogItem();
};

