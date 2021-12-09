#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FirecrackerEffectData.h"
#include "FirecrackerEffectHandlerComponent.generated.h"

class AActor;
class AFirecracker;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFirecrackerEffectHandlerComponentOnFirecrackerInRangeEnd, const FFirecrackerEffectData&, effectData);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFirecrackerEffectHandlerComponentOnFirecrackerInRangeBegin, const FFirecrackerEffectData&, effectData);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFirecrackerEffectHandlerComponentOnFirecrackerInRangeUpdate, float, deltaTime, const FFirecrackerEffectData&, effectData);

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UFirecrackerEffectHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFirecrackerEffectHandlerComponentOnFirecrackerInRangeBegin OnFirecrackerInRangeBegin;
    
    UPROPERTY(BlueprintAssignable)
    FFirecrackerEffectHandlerComponentOnFirecrackerInRangeUpdate OnFirecrackerInRangeUpdate;
    
    UPROPERTY(BlueprintAssignable)
    FFirecrackerEffectHandlerComponentOnFirecrackerInRangeEnd OnFirecrackerInRangeEnd;
    
private:
    UPROPERTY(Transient)
    TArray<FFirecrackerEffectData> _effectDataList;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetFirecrackerInRange(AFirecracker* firecracker, bool inRange);
    
private:
    UFUNCTION()
    void OnFirecrackerDestroyed(AActor* DestroyedActor);
    
public:
    UFirecrackerEffectHandlerComponent();
};

