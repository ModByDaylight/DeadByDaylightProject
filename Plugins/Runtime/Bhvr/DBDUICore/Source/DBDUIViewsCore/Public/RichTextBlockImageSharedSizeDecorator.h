#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlockImageDecorator.h"
#include "RichTextBlockImageSharedSizeDecorator.generated.h"

UCLASS(BlueprintType)
class URichTextBlockImageSharedSizeDecorator : public URichTextBlockImageDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Height;
    
    URichTextBlockImageSharedSizeDecorator();
};

