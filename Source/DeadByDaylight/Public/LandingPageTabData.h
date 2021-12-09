#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "LandingPageTabData.generated.h"

class USlateTextureAtlasInterface;
class ISlateTextureAtlasInterface;

USTRUCT(BlueprintType)
struct FLandingPageTabData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText DefaultText;
    
    UPROPERTY(EditAnywhere)
    TScriptInterface<ISlateTextureAtlasInterface> DefaultImage;
    
    UPROPERTY(EditAnywhere)
    FSlateColor BannerBackgroudColor;
    
    UPROPERTY(EditAnywhere)
    bool IsButtonEnabled;
    
    DEADBYDAYLIGHT_API FLandingPageTabData();
};

