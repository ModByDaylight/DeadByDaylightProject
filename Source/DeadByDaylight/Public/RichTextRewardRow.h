#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateTypes.h"
#include "Engine/DataTable.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "RichTextRewardRow.generated.h"

USTRUCT()
struct FRichTextRewardRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FTextBlockStyle TextStyle;
    
    UPROPERTY(EditAnywhere)
    FMargin TextMargin;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush Brush;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush TintsBrush;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush BackgroundBrush;
    
    DEADBYDAYLIGHT_API FRichTextRewardRow();
};

