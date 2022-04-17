#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FranklinsDemiseConsumedByEntityComponent.generated.h"

class ADBDPlayer;
class UTimerObject;
class UStatusEffect;
class UChargerComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UFranklinsDemiseConsumedByEntityComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, ReplicatedUsing=OnRep_ConsumeTimer)
    UTimerObject* _consumeTimer;
    
    UPROPERTY(Export, Transient)
    UStatusEffect* _camperStatus;
    
    UPROPERTY(Transient)
    ADBDPlayer* _previousOwner;
    
    UPROPERTY(Transient)
    ADBDPlayer* _originatingPerkOwner;
    
    UPROPERTY(Export, Transient)
    UChargerComponent* _itemChargerComponent;
    
public:
    UFranklinsDemiseConsumedByEntityComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_ConsumeTimer();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnConsumedByEntity();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Authority_StartConsume(float duration, ADBDPlayer* previousOwner, ADBDPlayer* slasher);
    
};

