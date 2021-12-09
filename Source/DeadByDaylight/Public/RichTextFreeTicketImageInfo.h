#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "RichTextFreeTicketImageInfo.generated.h"

USTRUCT(BlueprintType)
struct FRichTextFreeTicketImageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMargin Padding;
    
    DEADBYDAYLIGHT_API FRichTextFreeTicketImageInfo();
};

