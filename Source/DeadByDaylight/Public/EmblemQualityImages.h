#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "EmblemQualityImages.generated.h"

USTRUCT(BlueprintType)
struct FEmblemQualityImages {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FSlateBrush HighlightImage;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateBrush DarkImage;
    
    DEADBYDAYLIGHT_API FEmblemQualityImages();
};

