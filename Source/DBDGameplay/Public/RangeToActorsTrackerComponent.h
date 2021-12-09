#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RangeToActorsTrackerComponent.generated.h"

class URangeToActorsTrackerStrategy;

UCLASS()
class DBDGAMEPLAY_API URangeToActorsTrackerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly, Export, NoClear)
    TArray<URangeToActorsTrackerStrategy*> _rangeTrackers;
    
private:
    UFUNCTION()
    void OnLevelReadyToPlay();
    
public:
    URangeToActorsTrackerComponent();
};

