#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "UObject/NoExportTypes.h"
#include "MobileBaseUserWidget.h"
#include "EEmblemQuality.h"
#include "UMGTallyEmblemProgressBar.generated.h"

class UProgressBar;
class UCanvasPanel;
class UUMGTallyEmblemMarker;

UCLASS(Abstract, EditInlineNew)
class UUMGTallyEmblemProgressBar : public UMobileBaseUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UProgressBar* ProgressBar;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UCanvasPanel* QualityContainer;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UUMGTallyEmblemMarker> EmblemQualityClass;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D _emblemQualityAlignment;
    
    UPROPERTY(EditDefaultsOnly, NoClear)
    TMap<EEmblemQuality, FSlateBrush> _qualityFillImages;
    
public:
    UUMGTallyEmblemProgressBar();
};

