#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PowerToggleComponent.generated.h"

UCLASS()
class DBDGAMEPLAY_API UPowerToggleComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsInPower)
    bool _isInPower;
    
    UFUNCTION()
    void OnRep_IsInPower() const;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UPowerToggleComponent();
};

