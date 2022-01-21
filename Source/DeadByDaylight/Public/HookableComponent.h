#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HookableComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UHookableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UHookableComponent();
private:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetDrainTimerPercentLeft(float percentTime);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_DebugSetHookDrainStage(int32 drainStage);
    
public:
    UFUNCTION(BlueprintPure)
    float GetDrainTimerPercentLeft() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_SetDrainTimerPercentLeft(float percentTime);
    
};

