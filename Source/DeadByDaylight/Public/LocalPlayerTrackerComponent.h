#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "LocalPlayerTrackerComponent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLocalPlayerTrackerComponentTrackerOnLocallyObservedChanged);

UCLASS()
class DEADBYDAYLIGHT_API ULocalPlayerTrackerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FLocalPlayerTrackerComponentTrackerOnLocallyObservedChanged TrackerOnLocallyObservedChanged;
    
    UFUNCTION()
    void TriggerOnLocallyObservedChanged();
    
    ULocalPlayerTrackerComponent();
};

