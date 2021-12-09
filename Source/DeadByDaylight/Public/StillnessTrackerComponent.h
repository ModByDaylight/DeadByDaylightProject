#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StillnessTrackerComponent.generated.h"

class ADBDPlayer;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UStillnessTrackerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DistanceDecay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DecayWhileMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StillnessThreshhold;
    
    UPROPERTY(EditAnywhere)
    float StillnessTimerLimit;
    
    UPROPERTY(EditAnywhere)
    float DecaySpeedMultiplier;
    
protected:
    UPROPERTY(Transient)
    TWeakObjectPtr<ADBDPlayer> _trackedPlayer;
    
private:
    UFUNCTION()
    void StartTracking();
    
public:
    UStillnessTrackerComponent();
};

