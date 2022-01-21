#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlock.h"
#include "UMGHtmlRichText.generated.h"

UCLASS()
class UUMGHtmlRichText : public URichTextBlock {
    GENERATED_BODY()
public:
    UUMGHtmlRichText();
    UFUNCTION(BlueprintCallable)
    void SetHtmlText(const FString& InText);
    
};

