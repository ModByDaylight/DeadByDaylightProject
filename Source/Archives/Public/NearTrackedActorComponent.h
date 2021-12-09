#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NearTrackedActorComponent.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNearTrackedActorComponentIsWithinRangeDelegate, bool, isWithinRange, const AActor*, trackedActor);

UCLASS(BlueprintType)
class ARCHIVES_API UNearTrackedActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FNearTrackedActorComponentIsWithinRangeDelegate IsWithinRangeDelegate;
    
private:
    UPROPERTY(EditDefaultsOnly)
    float _distanceThreshold;
    
public:
    UFUNCTION(BlueprintCallable)
    void StopTrackingActor(const AActor* actor);
    
    UFUNCTION(BlueprintCallable)
    void StartTrackingActor(const AActor* actor);
    
    UFUNCTION(BlueprintCallable)
    void SetDistanceThreshold(float value);
    
    UFUNCTION(BlueprintPure)
    bool IsActorWithinRange(const AActor* actor) const;
    
    UNearTrackedActorComponent();
};

