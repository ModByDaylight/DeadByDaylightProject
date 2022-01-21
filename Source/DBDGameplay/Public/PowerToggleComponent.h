#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PowerToggleComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UPowerToggleComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsInPower)
    bool _isInPower;
    
public:
    UPowerToggleComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_IsInPower() const;
    
};

