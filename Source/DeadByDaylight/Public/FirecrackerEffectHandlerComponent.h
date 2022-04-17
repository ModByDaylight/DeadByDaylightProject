#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnFirecrackerInRangeEndEventDelegate.h"
#include "OnFirecrackerInRangeBeginEventDelegate.h"
#include "OnFirecrackerInRangeUpdateEventDelegate.h"
#include "FirecrackerEffectData.h"
#include "FirecrackerEffectHandlerComponent.generated.h"

class AActor;
class AFirecracker;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UFirecrackerEffectHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnFirecrackerInRangeBeginEvent OnFirecrackerInRangeBegin;
    
    UPROPERTY(BlueprintAssignable)
    FOnFirecrackerInRangeUpdateEvent OnFirecrackerInRangeUpdate;
    
    UPROPERTY(BlueprintAssignable)
    FOnFirecrackerInRangeEndEvent OnFirecrackerInRangeEnd;
    
private:
    UPROPERTY(Transient)
    TArray<FFirecrackerEffectData> _effectDataList;
    
public:
    UFirecrackerEffectHandlerComponent();
    UFUNCTION(BlueprintCallable)
    void SetFirecrackerInRange(AFirecracker* firecracker, bool inRange);
    
private:
    UFUNCTION()
    void OnFirecrackerDestroyed(AActor* DestroyedActor);
    
};

