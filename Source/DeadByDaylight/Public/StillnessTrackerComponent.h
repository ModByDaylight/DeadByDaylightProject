#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StillnessTrackerComponent.generated.h"

class ADBDPlayer;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
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
    
public:
    UStillnessTrackerComponent();
private:
    UFUNCTION()
    void StartTracking();
    
};

