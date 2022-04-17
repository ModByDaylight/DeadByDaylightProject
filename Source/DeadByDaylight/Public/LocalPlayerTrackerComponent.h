#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "LocalPlayerTrackerDelegateDelegate.h"
#include "LocalPlayerTrackerComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API ULocalPlayerTrackerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FLocalPlayerTrackerDelegate TrackerOnLocallyObservedChanged;
    
    ULocalPlayerTrackerComponent();
    UFUNCTION()
    void TriggerOnLocallyObservedChanged();
    
};

