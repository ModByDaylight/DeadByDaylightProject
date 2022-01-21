#pragma once
#include "CoreMinimal.h"
#include "AtlantaFreeTicketUIData.h"
#include "EPlayerRole.h"
#include "AtlantaFreeTicketCombinedData.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaFreeTicketCombinedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FAtlantaFreeTicketUIData UIData;
    
    UPROPERTY(BlueprintReadOnly)
    EPlayerRole Role;
    
    UPROPERTY(BlueprintReadOnly)
    int32 DurationInMinutes;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Quantity;
    
    DEADBYDAYLIGHT_API FAtlantaFreeTicketCombinedData();
};

