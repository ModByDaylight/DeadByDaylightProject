#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "HalloweenEventComponent.generated.h"

class USectionnedChargeableComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UHalloweenEventComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, VisibleAnywhere, ReplicatedUsing=OnRep_Vial)
    USectionnedChargeableComponent* _toxinVialComponent;
    
public:
    UHalloweenEventComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SpawnVial(float initialCharge);
    
    UFUNCTION()
    void OnRep_Vial();
    
    UFUNCTION()
    void OnFinishedPlaying(FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsVialFull() const;
    
    UFUNCTION(BlueprintPure)
    USectionnedChargeableComponent* GetVial() const;
    
};

