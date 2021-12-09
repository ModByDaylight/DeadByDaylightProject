#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateTypes.h"
#include "Layout/Margin.h"
#include "RichTextFreeTicketTextInfo.generated.h"

USTRUCT(BlueprintType)
struct FRichTextFreeTicketTextInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FTextBlockStyle TextStyle;
    
    UPROPERTY(EditAnywhere)
    FText Content;
    
    UPROPERTY(EditAnywhere)
    FMargin Padding;
    
    DEADBYDAYLIGHT_API FRichTextFreeTicketTextInfo();
};

