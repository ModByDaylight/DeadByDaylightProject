#pragma once
#include "CoreMinimal.h"
#include "ItemData.h"
#include "Styling/SlateColor.h"
#include "AtlantaFreeTicketUIData.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaFreeTicketUIData : public FItemData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSlateColor IconColor;
    
    DEADBYDAYLIGHT_API FAtlantaFreeTicketUIData();
};

