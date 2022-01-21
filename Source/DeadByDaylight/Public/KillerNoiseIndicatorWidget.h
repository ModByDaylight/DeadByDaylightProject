#pragma once
#include "CoreMinimal.h"
#include "NoiseIndicatorWidget.h"
#include "KillerNoiseIndicatorWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UKillerNoiseIndicatorWidget : public UNoiseIndicatorWidget {
    GENERATED_BODY()
public:
    UKillerNoiseIndicatorWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void SetSoundDistancePercentage(float distancePercentage);
    
};

