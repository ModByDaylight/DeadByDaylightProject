#pragma once
#include "CoreMinimal.h"
#include "EEventItemContentType.h"
#include "Styling/SlateColor.h"
#include "EventItemsContentTypeUIData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FEventItemsContentTypeUIData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EEventItemContentType ContentType;
    
    UPROPERTY(EditDefaultsOnly)
    bool NeedRemoveRarityBackground;
    
    UPROPERTY(EditDefaultsOnly)
    bool UseDefaultRarityBackgroundColor;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateColor DefaultRarityBackgroundColor;
    
    UPROPERTY(EditDefaultsOnly, NoClear)
    TSoftObjectPtr<UTexture2D> BackgroundTexture;
    
    UPROPERTY(EditDefaultsOnly, NoClear)
    TSoftObjectPtr<UTexture2D> RarityBackgroundTexture;
    
    DEADBYDAYLIGHT_API FEventItemsContentTypeUIData();
};

