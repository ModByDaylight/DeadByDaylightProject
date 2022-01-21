#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AnimationMontageDescriptor.h"
#include "AnimationMontageSlave.generated.h"

class UMontagePlayer;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UAnimationMontageSlave : public UActorComponent {
    GENERATED_BODY()
public:
    UAnimationMontageSlave();
    UFUNCTION(BlueprintCallable)
    void SetLeader(UMontagePlayer* leader);
    
private:
    UFUNCTION()
    void OnMontageStopped(const FAnimationMontageDescriptor id);
    
    UFUNCTION()
    void OnMontageStarted(const FAnimationMontageDescriptor id, const float rate);
    
};

