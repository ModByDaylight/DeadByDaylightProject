#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WiggleFreeComponent.generated.h"

class ADBDPlayer;
class ASlasherPlayer;
class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UWiggleFreeComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ASlasherPlayer* _killerWigglingFrom;
    
public:
    UWiggleFreeComponent();
private:
    UFUNCTION()
    void Authority_OnWiggleEnd();
    
    UFUNCTION()
    void Authority_OnPlayerPickedUpEnd(ADBDPlayer* picker);
    
    UFUNCTION()
    void Authority_OnLevelReadyToPlay();
    
    UFUNCTION()
    void Authority_OnChargeableCompleteEvent(bool completed, const TArray<AActor*>& instigatorsForCompletion);
    
};

