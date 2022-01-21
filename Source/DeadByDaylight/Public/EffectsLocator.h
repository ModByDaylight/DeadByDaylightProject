#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EffectsLocatorTargets.h"
#include "EffectsLocator.generated.h"

class UMaterialInstanceDynamic;

UCLASS()
class DEADBYDAYLIGHT_API AEffectsLocator : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FEffectsLocatorTargets> AffectedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ActorCaptureRadius;
    
    AEffectsLocator();
    UFUNCTION(BlueprintImplementableEvent)
    void OnLostActor(AActor* lostActor);
    
    UFUNCTION()
    void OnLeaveCollisionArea(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFoundActor(AActor* foundActor);
    
    UFUNCTION()
    void OnEnterCollisionArea(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActorTick(UMaterialInstanceDynamic* actorMaterialInstanceDynamic);
    
};

