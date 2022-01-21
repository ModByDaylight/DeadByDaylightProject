#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlock.h"
#include "TextBlockOverrideProperties.h"
#include "DBDRichTextBlock.generated.h"

UCLASS()
class UDBDRichTextBlock : public URichTextBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool _debugPreviewLargeTextState;
    
    UPROPERTY(EditAnywhere)
    bool _debugPreviewUndockedState;
    
    UPROPERTY(EditInstanceOnly)
    bool _hasLargeText;
    
    UPROPERTY(EditInstanceOnly)
    FTextBlockOverrideProperties _largeTextProperties;
    
    UPROPERTY(EditInstanceOnly)
    bool _overrideUndockedPropertiesWithLargeText;
    
    UPROPERTY(EditInstanceOnly)
    bool _hasUndocking;
    
    UPROPERTY(EditInstanceOnly)
    FTextBlockOverrideProperties _undockedProperties;
    
public:
    UDBDRichTextBlock();
    UFUNCTION(BlueprintCallable)
    void SetHTMLText(const FText& InText);
    
};

