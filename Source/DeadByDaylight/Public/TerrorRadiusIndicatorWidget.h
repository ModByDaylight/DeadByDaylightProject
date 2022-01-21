#pragma once
#include "CoreMinimal.h"
#include "NoiseIndicatorWidget.h"
#include "TerrorRadiusIndicatorWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UTerrorRadiusIndicatorWidget : public UNoiseIndicatorWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float _anchorY;
    
public:
    UTerrorRadiusIndicatorWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void SetSoundDistancePercentage(float distancePercentage);
    
};

