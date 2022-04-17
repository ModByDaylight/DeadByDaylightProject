#pragma once
#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "EEmblemQuality.h"
#include "EmblemQualityImages.h"
#include "UMGTallyEmblemMarker.generated.h"

class UImage;

UCLASS(Abstract, EditInlineNew)
class UUMGTallyEmblemMarker : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UImage* QualityImage;
    
    UPROPERTY(EditDefaultsOnly, NoClear)
    TMap<EEmblemQuality, FEmblemQualityImages> _qualityImages;
    
public:
    UUMGTallyEmblemMarker();
};

