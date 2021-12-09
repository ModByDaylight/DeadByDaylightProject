#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HtmlTagConvertRow.generated.h"

USTRUCT()
struct FHtmlTagConvertRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString HtmlTag;
    
    UPROPERTY(EditAnywhere)
    FString RichTextTag;
    
    DEADBYDAYLIGHT_API FHtmlTagConvertRow();
};

